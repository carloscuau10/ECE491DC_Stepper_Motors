int IN1 = 4;
int IN2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Rotate the Motor A clockwise
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  Serial.println(digitalRead(IN1));
  Serial.println(digitalRead(IN2));
  delay(2500);
  // Motor A
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  Serial.println(digitalRead(IN1));
  Serial.println(digitalRead(IN2));
  delay(100);

  // Rotate the Motor A counter-clockwise
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  Serial.println(digitalRead(IN1));
  Serial.println(digitalRead(IN2));
  delay(1000);
  // Motor A
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  Serial.println(digitalRead(IN1));
  Serial.println(digitalRead(IN2));
  delay(100);

}
