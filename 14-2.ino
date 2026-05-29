int sensorValue = 0;
int ledDimming = 0;
int pwmPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(pwmPin, OUTPUT);
}

void loop() {

  sensorValue = analogRead(A0);

  Serial.print("PhotoResistor read = ");
  Serial.print(sensorValue);

  ledDimming = map(sensorValue, 0, 1023, 0, 255);

  Serial.print(" , ledDimming = ");
  Serial.println(ledDimming);

  analogWrite(pwmPin, ledDimming);

  delay(100);
}