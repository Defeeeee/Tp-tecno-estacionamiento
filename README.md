# Tp-tecno-estacionamiento
### **Alumnos:** Juan Baader, Borja Izurieta y Federico Diaz Nemeth

### **Tp-tecno-estacionamiento**

### **Año:** 2022

### **Curso:** 2D

[Link a Github](https://github.com/Defeeeee/Tp-tecno-estacionamiento)

<br>
## **Primer Ejercicio**
```c++

void setup() {
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
}

void loop() {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    delay(2000);
}
```
## **Segundo Ejercicio**
```c++
int i = 0;

void setup() {
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    while( i < 10 ) {
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        delay(1000);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        delay(2000);
        i += 1;
    }
}

void loop() {
    delay(10);
}
```
## **Tercer Ejercicio**
```c++
#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
    servo1.attach(9); // el que esta mas cerca del pulsador
    servo2.attach(10); //  el que esta mas lejos del pulsador
}

void loop() {
    servo1.write(0);
    servo2.write(65);
    delay(3000);
    servo1.write(90);
    servo2.write(0);
    delay(3000);
}
```
## **Cuarto Ejercicio**
```c++
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
```
## **Quinto Ejercicio**
```c++
#include <LibEstacionamiento.h>
#include <Servo.h>

int i;
int ii;

Servo servo1;
Servo servo2;

void setup()
{
    inicializar_sistema();
    servo1.attach(9);
    servo2.attach(10);
    servo1.write(0);
    servo2.write(0);
}

void loop()
{
    luz_auto1.encender(ROJO);

    if (estado_pulsador == PRESIONADO && i < 2)
    {
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

        i = 3;
    }
    if (i > 2) {
    for (ii = 1; ii != 11; ++ii)
    {
        servo2.write(65);
        servo1.write(0);
        delay(1000);
        servo2.write(0);
        servo1.write(90);
        delay(1000);
    }
    }
}
```
## **Sexto Ejercicio**
```c++
#include <LibEstacionamiento.h>

void setup()
{
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
}
```
## **Septimo Ejercicio**
```c++
#include <LibEstacionamiento.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
void setup()
{
    inicializar_sistema();
    servo1.attach(9);
    servo2.attach(10);
    servo1.write(0);
    servo2.write(180);
}

void loop()
{

  Serial.println(digitalRead(A2));
    delay(1000);
    if (digitalRead(A2) == HIGH)
    {
        servo1.write(0);
        delay(10000);
        servo1.write(90);
    }

    if (digitalRead(A3) == HIGH)
    {
        servo2.write(65);
        delay(10000);
        servo2.write(0);
    }
}
```
## **Octavo Ejercicio**
```c++
#include <LibEstacionamiento.h>
#include <Servo.h>

    Servo servo2;
    Servo servo1;
     
void setup()
{
  inicializar_sistema(); 

    pinMode(A2, INPUT);
    pinMode(A3, INPUT);

    servo1.attach(9);
    servo2.attach(10);
}

void loop()
{
    if (digitalRead(A2) == LOW && digitalRead(A4) == LOW)
    {
        servo1.write(90);
        delay(10000);
        servo1.write(0);
    }

    if (digitalRead(A3) == HIGH)
    {
        servo2.write(65);
        delay(10000);
        servo2.write(0);
    }

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
}
```
## **Noveno Ejercicio**
```c++
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
```
## **Decimo Ejercicio**
```c++
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
```
## **Avanzado 1**
```c++
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
```
## **Avanzado 2**
```c++
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
```

