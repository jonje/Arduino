const int redLed = 2;
const int yellowLed = 3;
const int greenLed = 4;
const int aZero = A0;

void setup() {
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    
}

void loop() {
    // Read the value from moisture sensor using analog pin
    int sensorValue = analogRead(aZero);
    
    // Map the moisture sensors values to precentages
    // 550 is the value in dry soil
    sensorValue = map(sensorValue, 550, 0, 0, 100);
    
}
