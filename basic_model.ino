int irr = 2;
int irl = 4;
int mtr1 = 8;
int mtr2 = 9;
int mtr3 = 11;
int mtr4 = 12;

void setup() {
  pinMode(irr,INPUT);
  pinMode(irl,INPUT);
  pinMode(mtr1, OUTPUT);
  pinMode(mtr2, OUTPUT);
  pinMode(mtr3, OUTPUT);
  pinMode(mtr4, OUTPUT);
}

void loop()
{  
int right = digitalRead(irr);
int left = digitalRead(irl);
 if(right==0)
 {
  
  digitalWrite(mtr1,LOW);
  digitalWrite(mtr2,HIGH);
  digitalWrite(mtr3,LOW);
  digitalWrite(mtr4,HIGH);
  delay(400);
  digitalWrite(mtr1,LOW);
  digitalWrite(mtr2,HIGH);
  digitalWrite(mtr3,HIGH);
  digitalWrite(mtr4,LOW);
  delay(1000);
 }
 if(left==0)
 {
  
  digitalWrite(mtr1,LOW);
  digitalWrite(mtr2,HIGH);
  digitalWrite(mtr3,LOW);
  digitalWrite(mtr4,HIGH);
  delay(400);
  digitalWrite(mtr1,HIGH);
  digitalWrite(mtr2,LOW);
  digitalWrite(mtr3,LOW);
  digitalWrite(mtr4,HIGH);
  delay(1000);
 }
 if(left==0 && right==0)
 {
  digitalWrite(mtr1,LOW);
  digitalWrite(mtr2,HIGH);
  digitalWrite(mtr3,LOW);
  digitalWrite(mtr4,HIGH);
  delay(1600);
  digitalWrite(mtr1,HIGH);
  digitalWrite(mtr2,LOW);
  digitalWrite(mtr3,LOW);
  digitalWrite(mtr4,HIGH);
  delay(2500);
  
 }
 else
 {
  digitalWrite(mtr1,HIGH);
  digitalWrite(mtr2,LOW);
  digitalWrite(mtr3,HIGH);
  digitalWrite(mtr4,LOW);
 }
}
