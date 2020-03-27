int v = 0;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Test Encoder");
  attachInterrupt(digitalPinToInterrupt(2),
                 eevee, RISING);
}

void loop()
{
  Serial.println(v);
  delay(500);
}

void eevee()
{
  v++;
}
