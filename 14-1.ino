int ledPins[] = {2,3,4,5,6,7,8,9,10,11};  

void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  
  int sensorValue = analogRead(A0);
  int ledLevel = map(sensorValue, 0, 1023, 0, 10);
  Serial.println(sensorValue);
  for(int i = 0; i < 10; i++) {
    if(i < ledLevel) {
      digitalWrite(ledPins[i], HIGH);
    }
    else {
      digitalWrite(ledPins[i], LOW);
    }
  }

  delay(50);
}