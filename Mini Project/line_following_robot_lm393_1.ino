// C++ code
//
/*
  Drop-in ATtiny replacement for LM393 dual
  comparator
*/

int neg = 0;

int pos = 0;

void setup()
{
  pinMode(A3, INPUT);
  pinMode(A2, INPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  neg = analogRead(A3);
  pos = analogRead(A2);
  if (pos > neg) {
    digitalWrite(5, HIGH);
    digitalWrite(2, LOW);
  } else {
    digitalWrite(5, LOW);
    digitalWrite(2, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}