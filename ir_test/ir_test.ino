const int trigPin = 12; //trig pin connection
const int echoPin = 11;  //echopin connection
long duration;
int distanceCm;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;
  if (digitalRead(2) == 0) {
    digitalWrite(1, HIGH);
    digitalWrite(0, LOW);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
  }
  if (digitalRead(3) == 1) {
    digitalWrite(1, HIGH);
    digitalWrite(0, LOW);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
  }
  if (digitalRead(4) == 1) {
    digitalWrite(1, HIGH);
    digitalWrite(0, LOW);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
  }
   if (20 < distanceCm && distanceCm < 40 ) {
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    delay(1000);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
  }
  if (40 < distanceCm && distanceCm < 60) {
    digitalWrite(1, HIGH);
    digitalWrite(0, LOW);
    delay(1000);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
  }
  if (60 < distanceCm && distanceCm < 80 || distanceCm < 20) {
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    delay(1000);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
  }
}
