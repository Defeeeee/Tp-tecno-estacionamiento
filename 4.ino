#include <LibEstacionamiento.h>

void setup() {
    inicializar_sistema();
}

void loop() {
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
    bajar_barrera_entrada();
    luz_auto4.apagar(VERDE);    
}