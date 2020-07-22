#include <Ultra.h>
 
const int  pino_trigger = 6;
const int  pino_echo = 5;


const int  DO = 262;
const int  DOs = 277;
const int  RE = 294;
const int  REs = 311;
const int  MI = 330;
const int  FA = 349;
const int  FAs = 370;
const int  SOL = 392;
const int  SOLs = 415;
const int  LA = 440;
const int  LAs = 466;
const int  SI = 494;
const int  DO2 = 523;
const int  DOs2 = 554;
const int  RE2 = 587;
const int  REs2 = 622;

int  cm = 0; 
int  buzzer = 11;

Ultra meuUltra(pino_trigger, pino_echo);
 
void setup(){
    Serial.begin(9600);
    pinMode(buzzer, OUTPUT);
}
 
void loop(){
    cm = meuUltra.medir();
    Serial.println(cm);
    if(cm < 4)
    	noTone(buzzer);
    else if(cm < 8)
  	   tone(buzzer, DO);
    else if(cm < 12)
   	    tone(buzzer, DOs);
	else if(cm < 16)
   	    tone(buzzer, RE);
    else if(cm < 20)
  	     tone(buzzer, REs);
    else if(cm < 24)
  	     tone(buzzer, MI);
    else if(cm < 28)
  	     tone(buzzer, FA);
    else if(cm < 32)
  	     tone(buzzer, FAs);
    else if(cm < 36)
 	    tone(buzzer, SOL);
    else if(cm < 40)
   	    tone(buzzer, SOLs);
    else if(cm < 44)
  	    tone(buzzer, LA);
    else if(cm < 48)
   	    tone(buzzer, LAs);
    else if(cm < 52)
  	    tone(buzzer, SI);
    else if(cm < 56)
   	    tone(buzzer, DO2);
    else if(cm < 60)
    	tone(buzzer, DOs2);
    else
    	noTone(buzzer);

    delay(20);
}