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