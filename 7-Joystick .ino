const int inX = A0; // analog input for x-axis
const int inY = A1; // analog input for y-axis
const int inPressed = 2; // input for detecting whether the joystick/button is pressed
int xValue = 0; // variable to store x value
int yValue = 0; // variable to store y value
int notPressed = 0; // variable to store the button's state => 1 if not pressed
void setup() {
  pinMode(inX, INPUT); // setup x input
  pinMode(inY, INPUT); // setup y input
  pinMode(inPressed, INPUT); // we use a pullup-resistor for the button functionality
  
  Serial.begin(9600); // Setup serial connection for print out to console
}
void loop() {
  xValue = analogRead(inX); // reading x value [range 0 -> 1023]
  yValue = analogRead(inY); // reading y value [range 0 -> 1023]
  notPressed = digitalRead(inPressed); // reading button state: 1 = not pressed, 0 = pressed
  
  // print out values
  Serial.print("X: ");
  Serial.println(xValue);
  Serial.print("Y: ");
  Serial.println(yValue);
  Serial.print("Not pressed: ");
  Serial.println(notPressed);
  
  // The following delay of 1000ms is only for debugging reasons (it's easier to follow the values on the serial monitor)
  delay(1000); // Probably not needed for most applications
}
