#include <LibEstacionamiento.h>

void setup()
{
    Serial.begin(9600);
    inicializar_sistema();
}

void loop()
{
    Serial.print("Sensor 1: ");
    Serial.println(sensor_auto1.leer());
    Serial.print("Sensor 2: ");
    Serial.println(sensor_auto2.leer());
    Serial.print("Sensor 3: ");
    Serial.println(sensor_auto3.leer());
    Serial.print("Sensor 4: ");
    Serial.println(sensor_auto4.leer());
    Serial.println(" ");
    delay(1000);
}
