int xpin = A0;                  // x-axis of the accelerometer
int ypin = A1;                  // y-axis
int zpin = A2;                  // z-axis (only on 3-axis models)

void setup()
{
  Serial.begin(9600);
}

void loop()
{

  Serial.print(analogRead(xpin));
  Serial.print("x   ");
  
  Serial.print(analogRead(ypin));
  Serial.print("y     ");
  
  Serial.print(analogRead(zpin));
 Serial.println("z     ");
 
  delay(1000);
 
}
