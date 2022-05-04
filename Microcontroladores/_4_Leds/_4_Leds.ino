/*

  
  ~~~~ Liga o 1 e o 4 LED ao mesmo tempo, depois o 2 e o 3 ~~~~
  
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT); // PINMODE (Qual? Como?) - Define se é entrada ou saída
  pinMode(led2, OUTPUT);   
  pinMode(led3, OUTPUT);   
  pinMode(led4, OUTPUT);    
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level) // (DIGITAL MODE Define se quer que ligue em 5V ou no GND, alto ou baixo)
  digitalWrite(led4, HIGH);
  delay(100);               // wait for a second  // ~~~~ DELAY é um atraso
  
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led4, LOW);
  delay(100);               // wait for a second
  
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);
  delay(100);               // wait for a second
  
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);
  delay(100);               // wait for a second
  
  
  
}
