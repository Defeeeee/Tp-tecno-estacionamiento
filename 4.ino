#include <LibEstacionamiento.h>
#include <Servo.h>
Servo servo1;
Servo servo2;

void setup() {
    inicializar_sistema();
    servo1.attach(9); // el que esta mas cerca del pulsador
    servo2.attach(10); //  el que esta mas lejos del pulsador
    servo1.write(0);
    servo2.write(0);
}

void loop() {
    luz_auto1.encender(ROJO);
    delay(5000);
    luz_auto1.apagar(ROJO);

    servo2.write(65);
    luz_auto1.encender(VERDE);
    delay(10000);
    servo2.write(0);
    luz_auto1.apagar(VERDE);

    luz_auto4.encender(ROJO);
    delay(5000);
    luz_auto4.apagar(ROJO);    

    servo1.write(90);
    luz_auto4.encender(VERDE);
    delay(10000);
    servo1.write(0);
    luz_auto4.apagar(VERDE);    
}
