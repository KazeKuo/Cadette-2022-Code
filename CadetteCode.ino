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
 
void turnRight(int duration) {
  int M1Speed = 0;
  int M2Speed = 0;
  move(M1Speed, M2Speed, duration);
}

void turnLeft(int duration) {
  //move(M1Speed, M2Speed, duration);
}


void loop()
{
  int M1Speed = 0;
  int M2Speed = 0;
  int duration = 0;

  move(M1Speed, M2Speed, duration);

  
  
  
  delay(500);
  exit(0);
}
