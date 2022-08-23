#include <LibEstacionamiento.h>

void setup()
{
    Serial.begin(9600);
    inicializar_sistema();
}

void loop()
{
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

    Serial.println("Sensor 1: ");
    Serial.print(sensor_auto1);
    Serial.println("Sensor 2: ");
    Serial.print(sensor_auto2);
    Serial.println("Sensor 3: ");
    Serial.print(sensor_auto3);
    Serial.println("Sensor 4: ");
    Serial.print(sensor_auto4);
    delay(500)
}