/* jammer */

short pin = 1;

short _start = 23000;
short _stop = 27000;
short _step = 100;
 
void setup() {

}

void loop() {

  short i = _start;
  while(i <= _stop){
    pattern_a(i);  
    _step = random(50, 500);
    i+=_step;
    }
}

void pattern_a(short frequency){
  short i = 0;
  while (i < 10){
    tone(pin, frequency);
    i++;
    } 
  }
