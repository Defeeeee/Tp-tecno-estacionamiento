#include <LibEstacionamiento.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
int i;
int ii;

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
    luz_auto1.encender(ROJO);
        mostrar_cartel(digitalRead(A4));
        delay(1000);
    if (analogRead(A4) == HIGH && i < 2)
    {
        mostrar_cartel("e");
        luz_auto1.encender(ROJO);
        delay(5000);
        luz_auto1.apagar(ROJO);

        subir_barrera_entrada();
        luz_auto1.encender(VERDE);
        delay(10000);
        servo2.write(90);
        luz_auto1.apagar(VERDE);

        luz_auto4.encender(ROJO);
        delay(5000);
        luz_auto4.apagar(ROJO);

        subir_barrera_salida();
        luz_auto4.encender(VERDE);
        delay(10000);
        bajar_barrera_salida();
        luz_auto4.apagar(VERDE);

        i = 3;
    }
