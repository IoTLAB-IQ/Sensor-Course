int Buzzer = 5 ; // define Buzzer Interface
int PIR = 2; // define PIR Interface
int val ; // define numeric variables val
void setup ()
{
  pinMode (Buzzer, OUTPUT) ; // define Buzzer as output interface
  pinMode (PIR, INPUT) ; // define PIR sensor as INPUT interface
}
void loop ()
{
  val = digitalRead (PIR) ; 
  if (val == HIGH) // 
  {
    digitalWrite (Buzzer, HIGH);
  }
  else
  {
    digitalWrite (Buzzer, LOW);
  }
}
