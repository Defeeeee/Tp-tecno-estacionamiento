#include <LibEstacionamiento.h>
#include <Servo.h>

    Servo servo2;
    Servo servo1;
     
void setup()
{
  inicializar_sistema(); 

    pinMode(A2, INPUT);
    pinMode(A3, INPUT);

    servo1.attach(9);
    servo2.attach(10);
}

void loop()
{
    if (digitalRead(A2) == LOW && digitalRead(A4) == LOW)
    {
        servo1.write(90);
        delay(10000);
        servo1.write(0);
    }

    if (digitalRead(A3) == HIGH)
    {
        servo2.write(65);
        delay(10000);
        servo2.write(0);
    }

    if (sensor_auto1.leer() == ACTIVADO)
    {
        luz_auto1.apagar(VERDE);
        luz_auto1.encender(ROJO);
    }
    else
    {
        luz_auto1.apagar(ROJO);
        luz_auto1.encender(VERDE);
    }
    if (sensor_auto2.leer() == ACTIVADO)
    {
        luz_auto2.apagar(VERDE);
        luz_auto2.encender(ROJO);
    }
    else
    {
        luz_auto2.apagar(ROJO);
        luz_auto2.encender(VERDE);
    }
    if (sensor_auto3.leer() == ACTIVADO)
    {
        luz_auto3.apagar(VERDE);
        luz_auto3.encender(ROJO);
    }
    else
    {
        luz_auto3.apagar(ROJO);
        luz_auto3.encender(VERDE);
    }
    if (sensor_auto4.leer() == ACTIVADO)
    {
        luz_auto4.apagar(VERDE);
        luz_auto4.encender(ROJO);
    }
    else
    {
        luz_auto4.apagar(ROJO);
        luz_auto4.encender(VERDE);
    }
}
