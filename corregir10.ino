#include <LibEstacionamiento.h>
int i;
void setup()
{
    Serial.begin(9600);
    inicializar_sistema();
}

void loop()
{
    mostrar_cartel("Ingresar clave: \n");
    numero_ingresado = ingresar_numero();
    if (numero_ingresado == 9421)
    {
        mostrar_cartel("Clave Correcta \n");
        for (i = 1; 1 < 4; ++i)
        {
            subir_barrera_entrada();
            subir_barrera_salida();
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
        }
    }
    else
    {
        mostrar_cartel("Clave Inorrecta \n");
        for (i = 1; 1 < 7; ++i)
        {
            bajar_barrera_entrada();
            bajar_barrera_salida();
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
