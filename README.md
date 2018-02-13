# DSMC

This repository is for the creation and modification of the Dalhousie Supermileage electrical drive train motor controller software.
The motor controller is the primary component in the operation and regulation of a brushless DC electric motor. The motor needs the
controller to allow the direct current of a battery to drive the motor itself. The controller acts as a switch to transform the 
direct current into an alternting current at certain frequencies to subsequentially drive the motor at a certain speed outlined by 
the motor controller.

The form of motor controller utilized by Dalhousie Supermileage is a modified Vedder VESC. The only component proprietary to the
Vedder VESC is that of the motor driver chipset, a Texas Instruments DRV8302 3-Phase Brushless Motor Pre-Driver with Dual Current 
Sense Amps and Buck Converter (PWM Ctrl). This chipset will be controlled through the use of an Arduino Mega utilizing PWM controll.
The subsequent files used for the logic within the Arduino Mega logic controller are outlined within this repository.
