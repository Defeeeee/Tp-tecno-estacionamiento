#include <LibEstacionamiento.h>
#include <Servo.h>

int i;

Servo servo1;
Servo servo2;

void setup()
{
    inicializar_sistema();
    servo1.attach(9);
    servo2.attach(10);
    servo1.write(0);
    servo2.write(0);
}

void loop()
{
    luz_auto1.encender(ROJO);

    if (estado_pulsador == PRESIONADO && i < 2)
    {
        luz_auto1.encender(ROJO);
        delay(5000);
        luz_auto1.apagar(ROJO);

        servo2.write(65);
        luz_auto1.encender(VERDE);
        delay(10000);
        servo2.write(0);
        luz_auto1.apagar(VERDE);

        luz_auto4.encender(ROJO);
        delay(5000);
        luz_auto4.apagar(ROJO);

        servo1.write(90);
        luz_auto4.encender(VERDE);
        delay(10000);
        servo1.write(0);
        luz_auto4.apagar(VERDE);

        i = 3;
    }

    for (i = 1; i != 11; ++i)
    {
        servo2.write(65);
        servo1.write(0);
        delay(1000);
        servo2.write(0);
        servo1.write(90);
        delay(1000);
    }
}
