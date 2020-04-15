int sensorPin = A0; 
int sensorValue;  
int limit = 500; 

void setup() {
 Serial.begin(9600);
 pinMode(3, OUTPUT);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("Analog Value : ");
 Serial.println(sensorValue);
 
 if (sensorValue>limit) {
 digitalWrite(3, HIGH); 
 }
 else {
 digitalWrite(3, LOW); 
 }
 
 delay(1000); 
}
