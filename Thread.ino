#include <Thread.h>
void function0(){digitalWrite(13,!digitalRead(13));}
void function1(){digitalWrite(10,!digitalRead(10));}

Thread timer0(1000,function0), timer1(1500,function1);


void setup() {pinMode(13,1);pinMode(10,1);}

void loop() {

timer0.startThread();
timer1.startThread();

}
