void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(A0, OUTPUT);
}

void loop() {
  //analogWrite(A0, 0);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(D0, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(D0, LOW);
  delay(1000);
}
