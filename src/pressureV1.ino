void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pressure = analogRead(A0);
  if (pressure < 105) {
    digitalWrite(5, HIGH);
  }
  else digitalWrite(5, LOW);
  Serial.println(pressure);
}
