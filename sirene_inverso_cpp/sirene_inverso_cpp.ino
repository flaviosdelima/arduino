// piezo speaker connected to pin 8 and ground
#define wait 1
#define time 10
int freq = 0;

void setup(){
}

void loop() {
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
