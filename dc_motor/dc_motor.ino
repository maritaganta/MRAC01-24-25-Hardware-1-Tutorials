// Define pin connections
const int motorEnable = 5;  // ENA (PWM) pin
const int motorIn1 = 6;     // Motor input pin 1 (IN1)
const int motorIn2 = 7;     // Motor input pin 2 (IN2)

// Define timing constants
const int runTime = 2000;   // Motor running time in milliseconds (2 seconds)
const int stopTime = 2000;  // Motor stop time in milliseconds (2 seconds)

// Define speed levels
const int fullSpeed = 255;  // Maximum speed for motor
const int halfSpeed = 127;  // Half speed for motor

void setup() {
  // Set motor pins as outputs
  pinMode(motorEnable, OUTPUT);
  pinMode(motorIn1, OUTPUT);
  pinMode(motorIn2, OUTPUT);
}

void loop() {
  // Clockwise at full speed
  digitalWrite(motorIn1, HIGH);
  digitalWrite(motorIn2, LOW);
  analogWrite(motorEnable, fullSpeed);
  delay(runTime);

  // Stop motor
  analogWrite(motorEnable, 0);
  delay(stopTime);

  // Anti-clockwise at full speed
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, HIGH);
  analogWrite(motorEnable, fullSpeed);
  delay(runTime);

  // Stop motor
  analogWrite(motorEnable, 0);
  delay(stopTime);

  // Clockwise at half speed
  digitalWrite(motorIn1, HIGH);
  digitalWrite(motorIn2, LOW);
  analogWrite(motorEnable, halfSpeed);
  delay(runTime);

  // Stop motor
  analogWrite(motorEnable, 0);
  delay(stopTime);

  // Anti-clockwise at half speed
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, HIGH);
  analogWrite(motorEnable, halfSpeed);
  delay(runTime);

  // Stop motor
  analogWrite(motorEnable, 0);
  delay(stopTime);

  // Loop back to the beginning of the pattern
}
