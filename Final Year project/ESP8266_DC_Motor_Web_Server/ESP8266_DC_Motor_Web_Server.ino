// defines pins numbers
const int trigPin = 3;
const int echoPin = 2;
const int buzzer = 5;

// defines variables
long duration;
int distance;
int safetyDistance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Check if the duration is zero
  if (duration == 0) {
    Serial.println("No echo received");
    return;
  }

  // Calculating the distance
  distance = duration * 0.034 / 2;

  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the distance is within the safety range
  safetyDistance = distance;
  if (safetyDistance <= 70) {
    digitalWrite(buzzer, HIGH); // Turn on the buzzer
  } else {
    digitalWrite(buzzer, LOW); // Turn off the buzzer
  }
}
