/* jammer */

int pin = 1;
int freq_step = 100;
int start_freq = 23000;
int stop_freq = 27000;

 
void setup() {

}

void loop() {

  int i = start_freq;
  while(i <= stop_freq){
    toneout(i);
    
    //freq_step = random(50, 500);
    i+=freq_step;
    }
}

void toneout(int freq){
  int i = 0;
  while (i < 10){
    tone(pin, freq);
    i++;
    } 
  }
