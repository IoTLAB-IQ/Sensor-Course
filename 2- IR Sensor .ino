int Buzzer = 4 ;// define Buzzer Interface
int IR = 2; // define the obstacle avoidance sensor interface
int val ;// define numeric variables val

void setup ()
{
  pinMode (Buzzer, OUTPUT) ;// define Buzzer as output interface
  pinMode (IR, INPUT) ;// define the obstacle avoidance sensor output interface
}
void loop ()
{
  val = digitalRead (IR) ;// digital interface will be assigned a value of 2 to read val
  if (val == LOW) // When the obstacle avoidance sensor detects a signal, Buzzer on
  {
    digitalWrite (Buzzer, HIGH);
  }
  else
  {
    digitalWrite (Buzzer,LOW);
  }
}
