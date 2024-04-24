
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Rotate Phase A clockwise
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  //Phase B CW
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(5);

  // Phase A still CW
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  // Phase B counter clockwise
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(5);

  // Rotate Phase A counter-clockwise
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  //Phase B still CCW
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(5);

  // Phase B clockwise
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  // Phase A still CCW
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(5);

}
