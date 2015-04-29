/*
Atari 2600 Joystick Reader
Connects the Atari Joystick to an Arduino (Micro)
*/
 
int led = 13;
int upJoystickPin = 2;
bool upPressed = false;


// the setup routine runs once when you press reset:
void setup() {                
  pinMode(led, OUTPUT);     
  pinMode(upJoystickPin, INPUT);
  
  Serial.begin(9600);
  Serial.println("started");
}


// the loop routine runs over and over again forever:
void loop() {
  upPressed = digitalRead(upJoystickPin);
 
  Serial.print("pressed: ");
  Serial.println(upPressed);
  
  delay(20); 
}
