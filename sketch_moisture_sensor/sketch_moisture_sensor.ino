const int redLed = 2;
const int yellowLed = 3;
const int greenLed = 4;
const int aZero = A0;
int sensorValue;

void setup() {
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
//    Serial.begin(9600);
//    Serial.println("Reading from sensor....");
    delay(2000);
    
}

void loop() {
    // Read the value from moisture sensor using analog pin
    sensorValue = analogRead(aZero);
//    Serial.print("Initial Sensor value ");
//    Serial.println(sensorValue);
    
    // Map the moisture sensors values to precentages
    // 550 is the value in dry soil
    sensorValue = map(sensorValue, 550, 0, 0, 100);
//    Serial.print("Mapped value ");
//    Serial.println(sensorValue);
    delay(10000);
    
}
