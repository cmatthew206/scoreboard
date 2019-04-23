#include <OneWire.h>
#include <DallasTemperature.h>
//#include <string>

// Auxilary pins
const int BUZZ_PIN = 3;
const int TEMP_PIN = 5;

// Button pins
const int HOME_PIN = 36; // Orange wire (pin 36) (yellow button)
const int HOME_PIN_DOWN = 38;
const int AWAY_PIN = 40; // Blue wire (pin 40) (blue button)
const int AWAY_PIN_DOWN = 42;
const int PP_PIN = 44; // Green wire (pin 44) (green button)
const int RESET_PIN = 46; // Brown wire (pin 46) (black button)

#define UP "!B516"
#define DOWN "!B615"
#define LEFT "!B714"
#define RIGHT "!B813"
#define BTWO "!B21"
#define BFOUR "!B4"

// Setup temperature sensor
OneWire oneWire(5);
DallasTemperature sensors(&oneWire);

enum buttons{up,down,left,right};

void io_setup()
{
  debug("Starting IO Setup");
  pinMode(BUZZ_PIN, OUTPUT);
  //Configure inputs with pullup resistors
  pinMode(PP_PIN, INPUT_PULLUP);
  pinMode(RESET_PIN, INPUT_PULLUP);
  pinMode(HOME_PIN, INPUT_PULLUP);
  pinMode(AWAY_PIN, INPUT_PULLUP);
  pinMode(HOME_PIN_DOWN, INPUT_PULLUP);
  pinMode(AWAY_PIN_DOWN, INPUT_PULLUP);

  //sart temperature sensor
  sensors.begin();
  sensors.requestTemperatures();
  temperature = sensors.getTempFByIndex(0);

  debug("Finishing IO Setup");

  Serial1.begin(9600);
}

void buzz(int pitch, int duration)
{
  tone(BUZZ_PIN, pitch, duration);
}

void short_buzzer()
{
  buzz(700, 30);
}

void long_buzzer()
{
  buzz(700, 200);
}

void end_of_inning_buzzer()
{
  buzz(350, 1700);
}

void debounce(bool (*func)(void))
{
  debug("debouncing");
  delay(200);
  while(func());
}

bool get_bluetooth_input(int b)
{
  char inbyte[10];
  //debug("in BLE in");
  while(Serial1.available())
  {
    debug("Serial1 is available");
    Serial1.readBytes(inbyte, 10);
    // Serial.print(b);
    // debug("inbyte");

    Serial.println(inbyte);
    Serial.println(UP);
    Serial.println(strstr(inbyte,UP));
  }
  switch (b){
    case 1:
      //play pause
      return strstr(inbyte,UP);
      break;
    case 2:
      return strstr(inbyte,DOWN);
      break;
    case 3:
      return strstr(inbyte,LEFT);
      break;
    case 4:
      return strstr(inbyte,RIGHT);
      break;
    case 5:
      return strstr(inbyte,BTWO);
      break;
    case 6:
      return strstr(inbyte,BFOUR);
      break;
    default:
      debug("default case");
      return false;
  }
}

bool check_pin(int pin)
{
  return digitalRead(pin) == LOW;
}

bool reset_is_pressed()
{
  return check_pin(RESET_PIN) | get_bluetooth_input(3);
}

bool pause_play_is_pressed()
{
  return check_pin(PP_PIN) | get_bluetooth_input(4);
}

bool home_is_pressed()
{
  return check_pin(HOME_PIN) | get_bluetooth_input(1);
}

bool home_down_is_pressed()
{
  return check_pin(HOME_PIN_DOWN) | get_bluetooth_input(2);
}

bool away_is_pressed()
{
  return check_pin(AWAY_PIN) | get_bluetooth_input(5);
}

bool away_down_is_pressed()
{
  return check_pin(AWAY_PIN_DOWN) | get_bluetooth_input(6);
}

void getTemp()
{

  sensors.requestTemperatures();
  temperature = sensors.getTempFByIndex(0);

}
