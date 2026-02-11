#include <Arduino.h>

const int STEP_PIN = 5; // You can Change it to any GPIO Pin
const int DIR_PIN  = 4; // You can Change it to any GPIO Pin
const int ENA_PIN  = 2; // You can Change it to any GPIO Pin

int frequency = 100;    // speed; raise/lower as needed

// put your setup code here, to run once:
void setup() {
  pinMode(DIR_PIN, OUTPUT);
  pinMode(ENA_PIN, OUTPUT);
  pinMode(STEP_PIN, OUTPUT);
  digitalWrite(DIR_PIN, HIGH); // Convert to LOW if your motor runs opposite
}

// put your main code here, to run repeatedly:
void loop() {
  digitalWrite(STEP_PIN, HIGH);
  delayMicroseconds(frequency);
  digitalWrite(STEP_PIN, LOW);
  delayMicroseconds(frequency);
}