
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
  //Phase B OFF 
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(100);

  // Phase B counter clockwise
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  //Phase A OFF
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(100);

  // Rotate Phase A counter-clockwise
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  //Phase B OFF
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(100);

  // Phase B counterclockwise
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  // Phase A OFF
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(100);

}
