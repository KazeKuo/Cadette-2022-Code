#include <A4990MotorShield.h>

A4990MotorShield motors;

void setup()
{
  motors.flipM1(true);
  motors.flipM2(true);
}

void move(int M1Speed, int M2Speed, int duration) {
  motors.setSpeeds(M1Speed, M2Speed);
  delay(duration);
  motors.setSpeeds(0,0);
}
 
void turnClockwise(int duration) {
  int M1speed = 0;
  int M2speed = 0;
  move(M1Speed, M2speed, duration);
}

void turnCounterClockwise(int duration) {
  move(M1Speed, M2speed, duration);
}


void loop()
{
  int M1speed = 0;
  int M2speed = 0;
  int duration = 0;

  move(M1speed, M2speed,duration);

  
  
  
  delay(500);
  exit(0);
}
