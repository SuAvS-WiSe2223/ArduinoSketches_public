#include <Servo.h> // including servo library.

Servo servo_1; // Giving name to servo.

void setup (){
  servo_1.attach(2); // Attaching Servo to D4
}

void loop(){
  servo_1.write (45); // Servo will move to 45 degree angle.
  delay (1000);
  servo_1.write (90);  // servo will move to 90 degree angle.
  delay (1000);
}
