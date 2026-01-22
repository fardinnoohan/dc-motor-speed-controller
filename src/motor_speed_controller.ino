int motor = 9;     // PWM pin connected to MOSFET gate
int pot = A1;      // Potentiometer input
int value = 0;     // PWM duty cycle

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  int potValue = analogRead(pot);                 // Read potentiometer (0–1023)
  value = map(potValue, 0, 1023, 0, 255);          // Map to PWM range (0–255)

  analogWrite(motor, value);                      // Control motor speed
}
