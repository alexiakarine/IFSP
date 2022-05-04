/*

  
  ~~~~ Liga o 1 e o 4 LED ao mesmo tempo, depois o 2 e o 3 ~~~~
  
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
const int botao = 7;
int ledVerde= 3;
int ledAmarelo = 4;
int ledVermelho = 5;
int ledPedestre = 6;
int botaostatus = 0;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledVerde, OUTPUT); // PINMODE (Qual? Como?) - Define se é entrada ou saída
  pinMode(ledAmarelo, OUTPUT);   
  pinMode(ledVermelho, OUTPUT);   
  pinMode(ledPedestre, OUTPUT);
  pinMode(botao, INPUT);  
}

// the loop routine runs over and over again forever:
void loop()
{
  
  botaostatus = digitalRead(botao);
  
  if ( botaostatus == LOW ) 
{
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledPedestre, HIGH);
  
 }

  
 else 
{ 
  delay(2000);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledPedestre, LOW);
   
  digitalWrite(ledVerde, HIGH);
  delay(3000);  
  digitalWrite(ledVerde, LOW);

  digitalWrite(ledAmarelo, HIGH);
  delay(3000);  
  digitalWrite(ledAmarelo, LOW);
  
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledPedestre, HIGH);
  
  
  
}

  }
  

