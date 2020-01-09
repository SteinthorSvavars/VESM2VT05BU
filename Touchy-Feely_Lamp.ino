#include <CapacitiveSensor.h>
CapacitiveSensor capSense =
              CapacitiveSensor(4, 2);

int threshold = 500;
const int ledPin = 12;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  long sensorValue = capSense.capacitiveSensor(30);
  Serial.println(sensorValue);

if(sensorValue > threshold){
  digitalWrite(ledPin, HIGH);
}
else{ 
  digitalWrite(ledPin, LOW);
}
delay(10);
}
