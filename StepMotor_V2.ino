#include "drive.h"

/*
const int DirPin = 7;    // this pin defines direction CW or CCW
const int StepPin = 6;   // pulse this pin to move one step
*/

void setup()
{
  // Make pins as Outputs
  pinMode(StepPin, OUTPUT);
  pinMode(DirPin, OUTPUT);
}

void loop()
{
  swing_V2(500, 1000);
}
