int Led = 2 ; // define LED Interface
int Touch_pin = 9; // define Metal Touch Sensor Interface
int val ; // define numeric variables val
void setup ()
{
  pinMode (Led, OUTPUT) ; // define LED as output interface
  pinMode (Touch_pin, INPUT) ; // define metal touch sensor output interface
}
void loop ()
{
  val = digitalRead (Touch_pin) ; // digital interface will be assigned a value of 3 to read val
  if (val == HIGH) // When the metal touch sensor detects a signal, LED flashes
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
