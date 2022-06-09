int ver = 0;
int verm = 1;
int verme = 2;
int vermel = 3;

int amar = 4;
int amare = 5;
int amarel = 6;
int amarelo = 7;

int ve = 8;
int verdi = 9;
int verd = 10;
int verde = 11;


void setup()  
{
  pinMode(ver,OUTPUT);
  pinMode(verm,OUTPUT);
  pinMode(verme,OUTPUT);
  pinMode(vermel,OUTPUT);
  
  pinMode(amar,OUTPUT);
  pinMode(amare,OUTPUT);
  pinMode(amarel,OUTPUT);
  pinMode(amarelo,OUTPUT);
  
  pinMode(ve,OUTPUT);
  pinMode(verdi,OUTPUT);
  pinMode(verd,OUTPUT);
  pinMode(verde,OUTPUT);
}


void loop()
{
  
  digitalWrite(ver, HIGH);
  digitalWrite(verm, HIGH); 
  
  digitalWrite(verd, HIGH);
  digitalWrite(verde, HIGH);
  delay(2000);
  
  digitalWrite(verd, LOW);
  digitalWrite(verde, LOW);
  
  digitalWrite(amarel, HIGH);
  digitalWrite(amarelo, HIGH);
  delay(2000);
  
  digitalWrite(amarel, LOW);
  digitalWrite(amarelo, LOW);
  
  digitalWrite(ve, HIGH);
  digitalWrite(verdi, HIGH); 
  digitalWrite(verme, HIGH);
  digitalWrite(vermel, HIGH); 
  digitalWrite(ver, LOW);
  digitalWrite(verm, LOW); 
  
  delay(2000);
  
  digitalWrite(ve, LOW);
  digitalWrite(verdi, LOW);
  digitalWrite(amar, HIGH);
  digitalWrite(amare, HIGH);
  delay(2000);
  
   digitalWrite(verme, LOW);
  digitalWrite(vermel, LOW); 
  digitalWrite(amar, LOW);
  digitalWrite(amare, LOW); 
  delay(0);

  
}
