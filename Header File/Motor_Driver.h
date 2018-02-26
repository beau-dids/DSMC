#ifndef Testing_Header_h
#define Testing_Header_h
test this shit out
#include "Arduino.h" 

//input signals from hall effect sensors
#define PH_A_IN 44//interrupt 1 on pin 44
#define PH_B_IN 45//interrupt 2 on pin 44
#define PH_C_IN 46//interrupt 3 on pin 46

//output signals to the mosfet driver
//These definitions reflect the posibility of 
//using 3 different timer running at the same frequency
//but only outputtuing when needed.
#define PH_A_OUT_H 26 //OC0A timer0
#define PH_B_OUT_H 24 //OC1A timer1
#define PH_C_OUT_H 23 //OC2A timer2
//Will likely have to utilize interrupt routines to get
//the other 3 outptus for the Low side transistors.


// Fault, current and ADC pins
#define FAULT 43 //interrupt 0 on pin 43 to detect mosfet driver faults (highest priority)
//please note this routine does not nessesarily need to be done with an interrupt routine
#define OVR_CRNT 6 //interrupt 4 on pin 6 to detect over current (OCTW detect)
#define CNT_sense_1 97 //ADC0 to read sense resistor 1
#define CNT_sense_2 96 //ADC1 to read sense resistor 2
#define Sense_A 95 //ADC2 to read phase A Back EMF
#define Sense_B 94 //ADC3 to read phase B Back EMF
#define Sense_C 93 //ADC4  to read phase C Back EMF
#define Motor_Temp 92 //ADC5 to read the temperature of the motor
#define Driver_Input 91 //ADC6 to read the driver input to control the speed of the motor




#endif
