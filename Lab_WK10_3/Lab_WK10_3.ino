#define AA 2
#define BB 3

int previousA = 0;
int A = 0;
int B = 0;

void setup()
{
  pinMode(AA, INPUT_PULLUP);
  pinMode(BB, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  A = digitalRead(AA);
  B = digitalRead(BB);
  
  if(previousA == 0 && A == 1)
  {
    if(B == 1)
    {
      Serial.println("Counter-Clockwise");
      delay(700);
    }
    if(B == 0)
    {
      Serial.println("Clockwise");
      delay(700);
    }
  }
  
  previousA = A;
  
}
