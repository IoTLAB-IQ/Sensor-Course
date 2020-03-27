int Buzzer = 4 ;// initializing the pin 4 as the led pin
int flamepin = 8 ;// initializing pin 8 as the sensor output pin


void setup ( ) {

pinMode ( Buzzer , OUTPUT ); // declaring Buzzer pin as output pin
pinMode ( flamepin , INPUT ); // declaring sensor pin as input pin for Arduino
Serial.begin ( 9600 );// setting baud rate at 9600
}

void loop ( ) {
int Read = digitalRead ( flamepin ) ; // reading from the sensor
if (Read == LOW ) // applying condition
{
Serial.println ( " FLAME , FLAME , FLAME " ) ;
digitalWrite ( Buzzer , HIGH ) ;// if state is high, then turn high the Buzzer
}

else
{
Serial.println ( " no flame " ) ;
digitalWrite ( Buzzer , LOW ) ; // otherwise turn it low
}
}
