// first define the pins
const int DirPin = 7;    // this pin defines direction CW or CCW
const int StepPin = 6;   // pulse this pin to move one step
const int SPR = 1000;    // Steps per revolution

void CW(int step, int speed){
  digitalWrite(DirPin, HIGH);
  for(int x = 0; x < step; x++)
  {
   digitalWrite(StepPin, HIGH);
   delayMicroseconds(speed);
   digitalWrite(StepPin, LOW);
   delayMicroseconds(speed);
  }  
}

void CCW(int step, int speed){
  digitalWrite(DirPin, LOW);
  for(int x = 0; x < step; x++)
  {
   digitalWrite(StepPin, HIGH);
   delayMicroseconds(speed);
   digitalWrite(StepPin, LOW);
   delayMicroseconds(speed);
  }  
}

void swing(){
  // First let us rotate shaft clockwise
  digitalWrite(DirPin, HIGH);   // defines the direction to clockwise

  // Pulse the step pin
  for(int x = 0; x < SPR; x++)
  {
   digitalWrite(StepPin, HIGH);
   delayMicroseconds(1000);
   digitalWrite(StepPin, LOW);
   delayMicroseconds(2000);
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
    delayMicroseconds(2000);
  }
  delay(1000); // Short delay of one second  
 }

void swing_V2(int step, int speed)
{
  // 輸入參數:行程,速度
  CW( step, speed);
  CCW(step, speed);
  CCW(step, speed);
  CW( step, speed);
  //delay(1000);
}


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
