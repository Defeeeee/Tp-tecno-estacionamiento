#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
    servo1.attach(9); // el que esta mas cerca del pulsador
    servo2.attach(10); //  el que esta mas lejos del pulsador
}

void loop() {
    servo1.write(0);
    servo2.write(90);
    delay(3000);
    servo1.write(90);
    servo2.write(180);
    delay(3000);
}