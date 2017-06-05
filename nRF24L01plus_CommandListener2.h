// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _nRF24L01plus_CommandListener2_H_
#define _nRF24L01plus_CommandListener2_H_
#include "Arduino.h"
//add your includes for the project nRF24L01plus_CommandListener here

#include "Arduino_Screen.h"
#include "VT100_Control_Codes.h"

//end of add your includes here

enum RateStates{waiting, receivedEsc, receivedLeftSquareBracket} ;
RateStates rateState = waiting ;

enum UserCommandStates {reset, idle, throttleUp, positive1, negative1,
	positive2, negative2, zero} ;

UserCommandStates userCommandState = reset ;

//add your function definitions for the
//project nRF24L01plus_CommandListener2 here

//Do not add code below this line
#endif /* _nRF24L01plus_CommandListener2_H_ */
