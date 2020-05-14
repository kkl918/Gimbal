// first define the pins
const int DirPin = 7;    // this pin defines direction CW or CCW
const int StepPin = 6;   // pulse this pin to move one step
const int SPR = 2000;    // Steps per revolution

void setup()
{
  // Make pins as Outputs
  pinMode(StepPin, OUTPUT);
  pinMode(DirPin, OUTPUT);
}
void loop()
{
  // First let us rotate shaft clockwise
  digitalWrite(DirPin, HIGH);   // defines the direction to clockwise

  // Pulse the step pin
  for(int x = 0; x < SPR; x++)
  {
    digitalWrite(StepPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(StepPin, LOW);
    delayMicroseconds(1000);
  }
  delay(1000); // Short delay of one second
  
  // Now rotate shaft counterclockwise
  digitalWrite(DirPin, LOW);

  // Again pulse the step pin
  for(int x = 0; x < SPR; x++)
  {
    digitalWrite(StepPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(StepPin, LOW);
    delayMicroseconds(1000);
  }
  delay(1000); // Short delay of one second
}
