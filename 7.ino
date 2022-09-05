#include <LibEstacionamiento.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
void setup()
{
    inicializar_sistema();
    servo1.attach(9);
    servo2.attach(10);
    servo1.write(0);
    servo2.write(180);
}

void loop()
{

  Serial.println(digitalRead(A2));
    delay(1000);
    if (digitalRead(A2) == HIGH)
    {
        servo1.write(0);
        delay(10000);
        servo1.write(90);
    }

    if (digitalRead(A3) == HIGH)
    {
        servo2.write(65);
        delay(10000);
        servo2.write(0);
    }
}
