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

  if (numero_ingresado == 321) {
        mostrar_cartel("rojo 321 \n");
        for ( i=1 ; i<5; ++i)
        { 
            luz_auto1.encender(ROJO);
            luz_auto2.encender(ROJO);
            luz_auto3.encender(ROJO);
            luz_auto4.encender(ROJO);
            delay(1000);
            luz_auto1.apagar(ROJO);
            luz_auto2.apagar(ROJO);
            luz_auto3.apagar(ROJO);
            luz_auto4.apagar(ROJO);
            delay(1000);
        }
        numero_ingresado = 0;
  }
  else if (numero_ingresado == 987) {
            mostrar_cartel("todas 987 \n");
            luz_auto1.encender(VERDE);
            delay(2000);
            luz_auto2.encender(VERDE);
            delay(2000);
            luz_auto3.encender(VERDE);
            delay(2000);
            luz_auto4.encender(VERDE);
            delay(2000);
            luz_auto1.apagar(VERDE);
            luz_auto2.apagar(VERDE);
            luz_auto3.apagar(VERDE);
            luz_auto4.apagar(VERDE);
            delay(500);
            numero_ingresado = 0;
   }
   else if (numero_ingresado == 444) {
            mostrar_cartel("verde 444 \n");
            luz_auto1.encender(VERDE);
            luz_auto2.encender(VERDE);
            luz_auto3.encender(VERDE);
            luz_auto4.encender(VERDE);
            if (sensor_barrera_salida.leer()== ACTIVADO){
              luz_auto1.apagar(VERDE);
              luz_auto2.apagar(VERDE);
              luz_auto3.apagar(VERDE);
              luz_auto4.apagar(VERDE);
              }
              numero_ingresado = 0;
   } else {
    mostrar_cartel("Clave incorrecta \n");
    }
}
