// Semaforo Duplo

#define VERMELHO1 2
#define AMARELO1 3
#define VERDE1 4
#define VERMELHO2 8
#define AMARELO2 9
#define VERDE2 10

void setup()
{
  pinMode(VERMELHO1, OUTPUT);
  pinMode(AMARELO1, OUTPUT);
  pinMode(VERDE1, OUTPUT);
  
  pinMode(VERMELHO2, OUTPUT);
  pinMode(AMARELO2, OUTPUT);
  pinMode(VERDE2, OUTPUT);
}

void loop()
{
  
  //1
  digitalWrite(VERMELHO1, HIGH);
  digitalWrite(VERDE2, HIGH);
  delay(4000);
  
  digitalWrite(VERDE2, LOW);
  digitalWrite(AMARELO2, HIGH);
  delay(1000);
  
  digitalWrite(VERMELHO1,LOW);
  digitalWrite(VERDE1,HIGH);
  digitalWrite(AMARELO2,LOW);
  digitalWrite(VERMELHO2, HIGH);
  delay(4000);
  
  digitalWrite(VERDE1,LOW);
  digitalWrite(AMARELO1,HIGH);
  delay(1000);
  
  digitalWrite(AMARELO1,LOW);
  digitalWrite(VERMELHO1,HIGH);
  digitalWrite(VERMELHO2,LOW);
  digitalWrite(VERDE2,HIGH);
  delay(0);
}