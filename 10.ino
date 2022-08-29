#include <LibEstacionamiento.h>
#include <Servo.h>

Servo servo1;
Servo servo2;

int i;
void setup()
{
    Serial.begin(9600);
    inicializar_sistema();
    servo1.attach(9);
    servo2.attach(10);
    servo1.write(90);
    servo2.write(110);
}

void loop()
{
    mostrar_cartel("Ingresar clave: \n");
    numero_ingresado = ingresar_numero();
    if (numero_ingresado == 9421)
    {
        mostrar_cartel("Clave Correcta \n");
        for (i = 1; i < 4; ++i)
        {
            servo1.write(90);
            servo2.write(110);
            luz_auto1.encender(VERDE);
            luz_auto2.encender(VERDE);
            luz_auto3.encender(VERDE);
            luz_auto4.encender(VERDE);
            luz_auto1.encender(ROJO);
            luz_auto2.encender(ROJO);
            luz_auto3.encender(ROJO);
            luz_auto4.encender(ROJO);
            delay(1000);
            luz_auto1.apagar(VERDE);
            luz_auto2.apagar(VERDE);
            luz_auto3.apagar(VERDE);
            luz_auto4.apagar(VERDE);
            luz_auto1.apagar(ROJO);
            luz_auto2.apagar(ROJO);
            luz_auto3.apagar(ROJO);
            luz_auto4.apagar(ROJO);
            delay(1000);
        }
    }
    else
    {
        mostrar_cartel("Clave Inorrecta \n");
        for (i = 1; i < 7; ++i)
        {
            servo1.write(0);
            servo2.write(180);
            luz_auto1.encender(VERDE);
            luz_auto2.encender(VERDE);
            luz_auto3.encender(VERDE);
            luz_auto4.encender(VERDE);
            luz_auto1.encender(ROJO);
            luz_auto2.encender(ROJO);
            luz_auto3.encender(ROJO);
            luz_auto4.encender(ROJO);
            delay(1000);
            luz_auto1.apagar(VERDE);
            luz_auto2.apagar(VERDE);
            luz_auto3.apagar(VERDE);
            luz_auto4.apagar(VERDE);
            luz_auto1.apagar(ROJO);
            luz_auto2.apagar(ROJO);
            luz_auto3.apagar(ROJO);
            luz_auto4.apagar(ROJO);
            delay(500);
        }
    }
}
