#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

#define OE   9
#define LAT 10
#define CLK 11
#define A   A0
#define B   A1
#define C   A2
#define D   A3
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, true, 64);

// Digit variables
int r = 1,
    red,
    blue,
    white,
    green,
    yellow,
    grey,
    black,
    col,
    dir = 1, // direction bit for clock bounce at <= 3 seconds
    rb = r+12,
    c = 0,
    cp = c + 7,
    lumosity = 2,
    i,
    j;

// Clock Variables
float temperature;
float newTemp;
float oldTemp = 75;
int time = 300; // initialize at 5 min
int count = 300;
unsigned long currentMillis;
long previousMillis;
long tempMillis;
long shakeMillis;
long interval = 1000;
// Button pins
const int startstopPin = 7;
const int resetPin = 5;
const int homePin = 4;
const int awayPin = 6;
const int buzzPin = 3;
int awayScore = 0;
int homeScore = 0;
int startState, pauseState, minState, resetState, homescoreState, awayscoreState; // variables to hold button states

// SETUP
void setup()
{
  matrix.begin();       // Initialize the matrix.
  Serial.begin(9600);
  pinMode(startstopPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(resetPin, INPUT);
  setLumosity(0);
}

// main loop --> jump into state machine
void loop()
{
  splashScreen();
}





