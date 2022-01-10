void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(PB1, OUTPUT); // I2C INT pin
}

void loop() {
  //analogWrite(A0, 0);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(PB1, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(PB1, LOW);
  delay(1000);
}
