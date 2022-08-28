#include <LibEstacionamiento.h>
int csgo;
void setup(){
  Serial.begin(9600);
  inicializar_sistema();
}


void loop() {
  if (sensor_barrera_salida.leer()== ACTIVADO)
    {
     csgo += 1;
     Serial.println(csgo);
     delay(1000);
    }
}
