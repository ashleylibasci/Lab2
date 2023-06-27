/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ashleylibasci/IoTFolderLabs/Lab2/src/Lab2.ino"
void setup();
void loop();
#line 1 "/Users/ashleylibasci/IoTFolderLabs/Lab2/src/Lab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t value;

void setup()
{
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
}

void loop()
{
  value = analogRead(A5);
  Serial.println(A5);

  digitalWrite(D5, HIGH);
  delay(value);
  digitalWrite(D5, LOW);
  delay(value);
}