/*
Author:  Eng. Gabriel Godoi
Date: 19 dez. 2019

Description: This lib put any function in a millis delay, ie. it doesn't stop your code.
*/

#ifndef Thread_h
#define Thread_h
 
#include <Arduino.h>

class Thread{

  public:
  
    Thread(int delayTime, void (*address)());  //The constructor is a function that define the object, like his name and the parameters  
    void startThread();
    
  private:

    int _delayTime;
    unsigned long lastDelay;
    void (*addressFunction)();

  
};

#endif
