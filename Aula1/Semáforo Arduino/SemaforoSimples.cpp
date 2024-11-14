// Semaforo Simples

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(3000);
  
  digitalWrite(6, HIGH);
  digitalWrite(2, LOW);
  delay(5000);
  
  digitalWrite(4, HIGH);
  digitalWrite(6, LOW);
  delay(1000);
  
  digitalWrite(4, LOW);
  delay(0);
  
}
