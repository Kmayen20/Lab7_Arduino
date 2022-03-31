int LED = 3;
int sensorValue;
int POT = A0;

void setup(){
  pinMode( LED, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sensorValue = analogRead(POT);
  Serial.println(sensorValue);

  if(sensorValue <511) {
    digitalWrite(LED, LOW);
    }
  else {
    digitalWrite(LED, HIGH);
    }
  delay(100);  
}
