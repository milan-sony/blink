// blink 2 LED bulb
void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // bulb 1
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  // bulb 2
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
}