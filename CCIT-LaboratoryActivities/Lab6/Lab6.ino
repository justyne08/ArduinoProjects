void setup() {
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int temp = map(((analogRead(A0) - 20) * 3), 0, 1023, 0, 100); 
  Serial.print("Current Temperature: "); 
  Serial.println(temp);

  if (temp > 40)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  }
  else
  {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }
}
