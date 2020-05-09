const int ledx= 13;
const int ledy=12;
const int ledz= 8;      
const int xpin = A0;                  // x-axis of the accelerometer
const int ypin = A1;                  // y-axis
const int zpin = A2;                  // z-axis (only on 3-axis models)

void setup()
{
  // initialize the serial communications:
  Serial.begin(9600);

  
  pinMode(ledx, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(ledz, OUTPUT);
}

void loop()
{
  // print the sensor values:
  Serial.print(analogRead(xpin));
  // print a tab between values:
  Serial.print("x   ");
  Serial.print(analogRead(ypin));
  // print a tab between values:
  Serial.print("y     ");
  Serial.print(analogRead(zpin));
 Serial.println("z     ");
  // delay before next reading:
  delay(100);
 
}
