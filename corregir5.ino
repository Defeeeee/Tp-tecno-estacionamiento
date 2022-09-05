#include <LibEstacionamiento.h>

int i;

void setup()
{
    inicializar_sistema();
}

void loop()
{
    luz_auto1.encender(ROJO);

    if (estado_pulsador == PRESIONADO && i < 2)
    {
        luz_auto1.encender(ROJO);
        delay(5000);
        luz_auto1.apagar(ROJO);

        subir_barrera_entrada();
        luz_auto1.encender(VERDE);
        delay(10000);
        bajar_barrera_entrada();
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

    for (i = 1; i != 11; ++i)
    {
        subir_barrera_entrada();
        bajar_barrera_salida();
        delay(1000);
        bajar_barrera_entrada();
        subir_barrera_salida();
        delay(1000);
    }
}
