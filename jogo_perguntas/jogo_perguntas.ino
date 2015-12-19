/*
  Simulacao do sistema do jogo de perguntas
  onde os jogadores devem bater no botao para responder as perguntas,
  parecido com o passa ou repassa
*/


// piezo speaker connected to pin 8 and ground
#define wait 1
#define time 10
#define tempo 10
int frequencia = 0;
int Pinofalante = 10;
int freq = 0;


void setup()
{
  pinMode(Pinofalante,OUTPUT); //Pino do buzzer
}
void loop()
{
  sirene2();
}

void sirene2()
{
  for (frequencia = 150; frequencia < 1800; frequencia += 1) 
  {
    tone(Pinofalante, frequencia, tempo); 
    delay(1);
  }
  for (frequencia = 1800; frequencia > 150; frequencia -= 1) 
  {
    tone(Pinofalante, frequencia, tempo); 
    delay(1);
  }

}

void sirene1() {
  for (freq = 150; freq < 1800; freq += 1) {
    tone(10, freq, time); // Beep pin, freq, time
    delay(wait);
  }
  for (freq = 2300; freq > 2299; freq -= 1) {
    tone(10, freq, time); // Beep pin, freq, time
    delay(wait);
    // This is for a like nuclear alarm
  }
}
