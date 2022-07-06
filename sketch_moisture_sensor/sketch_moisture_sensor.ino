const int redLed = 2;
const int yellowLed = 3;
const int greenLed = 4;
const int aZero = A0;
int sensorValue;

void setup() {
    Serial.begin(9600);
    Serial.println("Reading from sensor....");
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    
    delay(2000);
    
}

void loop() {
    // Read the value from moisture sensor using analog pin
    sensorValue = analogRead(aZero);
    Serial.print("Initial Sensor value ");
    Serial.println(sensorValue);
    
    // Map the moisture sensors values to precentages
    // 550 is the value in dry soil
    sensorValue = map(sensorValue, 550, 0, 0, 100);
    Serial.print("Mapped value ");
    Serial.println(sensorValue);

    if (sensorValue >= 0 && sensorValue <= 33) {
      // Water is needed turn on red light
      Serial.println("RED");
    } else if (sensorValue > 33 && sensorValue < 66) {
      // Water is in the mid range turn on yellow light
      Serial.println("YELLOW");
    } else {
      // Water is good turn on green light
      Serial.println("GREEN");
    }
    delay(5000);
    
}
