#include <OneWire.h>
#include <DallasTemperature.h>

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

// Setup temperature sensor
OneWire oneWire(TEMP_PIN);
DallasTemperature sensors(&oneWire);

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
  debug("Finishing IO Setup");
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

bool check_pin(int pin)
{
  return digitalRead(pin) == LOW;
}

bool reset_is_pressed()
{
  return check_pin(RESET_PIN);
}

bool pause_play_is_pressed()
{
  return check_pin(PP_PIN);
}

bool home_is_pressed()
{
  return check_pin(HOME_PIN);
}

bool home_down_is_pressed()
{
  return check_pin(HOME_PIN_DOWN);
}

bool away_is_pressed()
{
  return check_pin(AWAY_PIN);
}

bool away_down_is_pressed()
{
  return check_pin(AWAY_PIN_DOWN);
}

void getTemp()
{
  temperature = sensors.getTempFByIndex(0);
}
