#include <A4990MotorShield.h>

A4990MotorShield motors;

void setup()
{
  motors.flipM1(true);
  motors.flipM2(true);
}

void move(int M1Speed, int M2Speed, double duration) {
  motors.setSpeeds(M1Speed, M2Speed);
  delay(duration);
  motors.setSpeeds(0,0);
}
 
void turnClockwise(double duration) {
  int M1TurnSpeed=100;
  int M2TurnSpeed=400;
  motors.setSpeeds(M1TurnSpeed, M2TurnSpeed);
  delay(duration);
  motors.setSpeeds(0,0);
}

void turnCounterClockwise(double duration) {
  int M1TurnSpeed=400;
  int M2TurnSpeed=100;
  motors.setSpeeds(M1TurnSpeed, M2TurnSpeed);
  delay(duration);
  motors.setSpeeds(0,0);
}


void loop()
{
  int M1speed = 0;
  int M2speed = 0;
  int duration = 0;

  move(M1speed,M2speed,duration);

  
  
  
  delay(500);
  exit(0);
}
