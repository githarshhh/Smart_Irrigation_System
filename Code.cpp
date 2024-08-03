// C++ code
//
int soil_moisture = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  soil_moisture = analogRead(A0);
  Serial.println(soil_moisture);
  if (soil_moisture < 100) {
    digitalWrite(7, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(9, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}