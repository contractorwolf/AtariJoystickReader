/*
Atari 2600 Joystick Reader
Connects the Atari Joystick to an Arduino (Micro)
*/
 
int led = 13;
int upJoystickPin = 2;
int downJoystickPin = 3;
int rightJoystickPin = 4;
int leftJoystickPin = 5;
int buttonJoystickPin = 6;


bool upPressed = false;
bool downPressed = false;
bool leftPressed = false;
bool rightPressed = false;
bool buttonPressed = false;




// the setup routine runs once when you press reset:
void setup() {                
  pinMode(led, OUTPUT);     
  pinMode(upJoystickPin, INPUT);
  
  pinMode(buttonJoystickPin, INPUT); 
  pinMode(downJoystickPin, INPUT); 
  pinMode(leftJoystickPin, INPUT);
  pinMode(rightJoystickPin, INPUT);
  
  
  
  Serial.begin(9600);
  Serial.println("started");
}


// the loop routine runs over and over again forever:
void loop() {
  upPressed = digitalRead(upJoystickPin);
  downPressed = digitalRead(downJoystickPin);  
  leftPressed = digitalRead(leftJoystickPin);  
  rightPressed = digitalRead(rightJoystickPin);  
  buttonPressed = digitalRead(buttonJoystickPin);  
  
  
  
  
 
  Serial.print("up: ");
  Serial.print(upPressed);
  
  Serial.print("  down: ");
  Serial.print(downPressed);  
  
  Serial.print("  left: ");
  Serial.print(leftPressed);  
  
  Serial.print("  right: ");
  Serial.print(rightPressed);  
  
  Serial.print("  button: ");
  Serial.println(buttonPressed);  
  
  
  
  
  
  delay(2); 
}
