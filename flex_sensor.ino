const int flexPin = 14;

void setup() { 
  Serial.begin(9600);
  pinMode(13, OUTPUT);  // Set GPIO 5 as an output
  digitalWrite(13, HIGH);
}

void loop(){ 
  int flexValue;
  flexValue = analogRead(flexPin);
  Serial.print("sensor: ");
  Serial.println(flexValue);
 
  delay(500);
}
