#include <LibEstacionamiento.h>

void setup()
{
    inicializar_sistema();
}

void loop()
{
    if (sensor_barrera_entrada.leer() == ACTIVADO)
    {
        subir_barrera_entrada();
        delay(10000);
        bajar_barrera_entrada();
    }

    if (sensor_barrera_salida.leer() == ACTIVADO)
    {
        subir_barrera_salida();
        delay(10000);
        bajar_barrera_salida();
    }
}
