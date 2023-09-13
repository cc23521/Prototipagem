const char RED = 13;
int intervalos[] = {1000, 2000};
const int DELAY_S = intervalos[0];
const int DELAY_O = intervalos[1];

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (true) {
  piscaS();
  piscaO();
  piscaS();
  delay(3000);
  }
}

void piscaS() {
  digitalWrite(RED, HIGH);
  delay(DELAY_S);
  digitalWrite(RED, LOW);
  delay(DELAY_S);
  digitalWrite(RED, HIGH);
  delay(DELAY_S);
  digitalWrite(RED, LOW);
  delay(DELAY_S);
  digitalWrite(RED, HIGH);
  delay(DELAY_S);
  digitalWrite(RED, LOW);
  delay(DELAY_S);
}

void piscaO() {
  digitalWrite(RED, HIGH);
  delay(DELAY_O);
  digitalWrite(RED, LOW);
  delay(DELAY_O);
  digitalWrite(RED, HIGH);
  delay(DELAY_O);
  digitalWrite(RED, LOW);
  delay(DELAY_O);
  digitalWrite(RED, HIGH);
  delay(DELAY_O);
  digitalWrite(RED, LOW);
  delay(DELAY_O);
}