int irf = 4;
int mtr1 = 8;
int mtr2 = 9;
int mtr3 = 11;
int mtr4 = 12;

void setup() {
  pinMode(irf,INPUT);
  pinMode(mtr1, OUTPUT);
  pinMode(mtr2, OUTPUT);
  pinMode(mtr3, OUTPUT);
  pinMode(mtr4, OUTPUT);
}

void loop()
{  
int a = digitalRead(irf);
long randomNumber;
 if(a==0)
 {
  
  digitalWrite(mtr1,LOW);
  digitalWrite(mtr2,HIGH);
  digitalWrite(mtr3,LOW);
  digitalWrite(mtr4,HIGH);
  delay(500);
  randomNumber = random(1,5);
    if(randomNumber<3)
    {
    digitalWrite(mtr1,LOW);
    digitalWrite(mtr2,HIGH);
    digitalWrite(mtr3,HIGH);
    digitalWrite(mtr4,LOW);
    delay(1500);
    }
    else
    {
    digitalWrite(mtr1,HIGH);
    digitalWrite(mtr2,LOW);
    digitalWrite(mtr3,LOW);
    digitalWrite(mtr4,HIGH);
    delay(1500);
    }
 }
 else
 {
  digitalWrite(mtr1,HIGH);
  digitalWrite(mtr2,LOW);
  digitalWrite(mtr3,HIGH);
  digitalWrite(mtr4,LOW);
 }
}
