/* jammer */

short pin = 1;
short start_freq = 23000;
short stop_freq = 27000;
short freq_step = 100;
 
void setup() {

}

void loop() {

  short i = start_freq;
  while(i <= stop_freq){
    toneout(i);  
    freq_step = random(50, 500);
    i+=freq_step;
    }
}

void toneout(short freq){
  short i = 0;
  while (i < 10){
    tone(pin, freq);
    i++;
    } 
  }
