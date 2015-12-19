/*
  Simulacao do sistema do jogo de perguntas
  onde os jogadores devem bater no botao para responder as perguntas,
  parecido com o passa ou repassa
*/


// piezo speaker connected to pin 8 and ground
#define wait 1
#define tempo 10
int frequencia = 0;
int Pinofalante1 = 2;
int Pinofalante2 = 3;
int led1 = 5;
int led2 = 4;

const int buttonPin1 = 9;     // the number of the pushbutton pin
const int buttonPin2 = 8;     // the number of the pushbutton pin
// variables will change:
int button1State = 0;         // variable for reading the pushbutton status
// variables will change:
int button2State = 0;         // variable for reading the pushbutton status

void setup()
{
  pinMode(Pinofalante1,OUTPUT); //Pino do buzzer 1
  pinMode(Pinofalante2,OUTPUT); //Pino do buzzer 2
  
  pinMode(led1, OUTPUT);  
  pinMode(led2, OUTPUT);  
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  
}

void loop()
{
  
  // read the state of the pushbutton value:
  button1State = digitalRead(buttonPin1);
  button2State = digitalRead(buttonPin2);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (button1State == 1) {
    // turn LED on:
    digitalWrite(led1, HIGH);
    sirene1();
  } else
  if (button2State == 1) {
    // turn LED on:
    digitalWrite(led2, HIGH);
    sirene2();
  } 
  
  if ((button1State == 1)||(button2State == 1)) {
  delay(3000);  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  noTone(Pinofalante1);
  noTone(Pinofalante2);
  }
  
   
}

void sirene2()
{
  for (frequencia = 150; frequencia < 1800; frequencia += 1) 
  {
    tone(Pinofalante2, frequencia, tempo); 
    delay(wait);
  }
  for (frequencia = 1800; frequencia > 150; frequencia -= 1) 
  {
    tone(Pinofalante2, frequencia, tempo); 
    delay(wait);
  }

}

void sirene1() {
  for (frequencia = 150; frequencia < 1800; frequencia += 1) {
    tone(Pinofalante1, frequencia, tempo); // Beep pin, freq, time
    delay(wait);
  }
  for (frequencia = 2300; frequencia > 2299; frequencia -= 1) {
    tone(Pinofalante1, frequencia, tempo); // Beep pin, freq, time
    delay(wait);

  }
}
