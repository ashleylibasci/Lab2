SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t value;

void setup()
{
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
  pinMode(A5, INPUT);
}

void loop()
{
  value = analogRead(A5);
  Serial.println(value);

  digitalWrite(D5, HIGH);
  delay(value);
  digitalWrite(D5, LOW);
  delay(value);
}