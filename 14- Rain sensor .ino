
void setup() {
  //on pin12 we have the rain sensor so this is an input
  pinMode(12, INPUT);
  //on pin 13 we have buzzer so this is an output
  pinMode(13, OUTPUT);

}

void loop() {
  //when rain sensor gives LOW signal it means that it rains
  if(digitalRead(12) == LOW){
    //for half a second we turn the buzzer on
    digitalWrite(13, HIGH);
    delay(500);
    //for half a second we turn the buzzer off 
    digitalWrite(13, LOW);
    delay(500);
    //so we have the beep-beep signal like an alarm
  }

}

