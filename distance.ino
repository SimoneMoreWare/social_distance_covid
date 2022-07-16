int LED_GREEN = 3;
int LED_RED = 2;
int TRIG_PIN = 6;
int ECHO_PIN = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize led pins as output.
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  
  // initialize sensor pins
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIG_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  delay(300);
  
  // Clears the TRIG_PIN condition
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  // Sets the TRIG_PIN HIGH (ACTIVE) for 10 microseconds
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Reads the ECHO_PIN, returns the sound wave travel time in microseconds
  long duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculating the distance
  // Speed of sound wave divided by 2 (there and back)
  int distance = duration * 0.034 / 2; 
  
  // Displays the distance on the Serial Monitor
  Serial.print(distance);
  Serial.println("cm");

  // Set the led state based on the distance
  digitalWrite(LED_GREEN, distance  >= 200 ? HIGH : LOW);
  digitalWrite(LED_RED, distance < 200 ? HIGH : LOW);
}
