/* Main method from Derek Molloy's makeLEDs.cpp from exploringBB
 * edited by David Melanson for CPE 422 Fall 2023 Homework 7
 * 
 * Program takes command line arguments "on", "off", "flash", "status", or "blink" and an integer.
 * "on" - turns on LED
 * "off" - turns off LED
 * "flash" - flashes LED
 * "status" - outputs current status of LED
 * "blink"  - blinks the LED the number of times passed to it in the form of an integer after the word "blink"
 *
 * If anything else passed to program, an error message is displayed.
 */

#include "derek_LED.h"

int main(int argc, char* argv[]){
   if((argc!=2) and (argc == 3 and !atoi(argv[2]))){
		cout << "Usage is makeLEDs <command> ?<integer>" << endl;
        	cout << "   command is one of: on, off, flash, status, or blink followed by an integer" << endl;
		cout << " e.g. myApp flash" << endl;
		cout << "e.g. myApp blink 5" << endl;
		return 2;
   }
   cout << "Starting the myApp program" << endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   if(cmd == "blink"){
	leds[3].blink(atoi(argv[2]));
	return 0;
   }
   for(int i=0; i<=3; i++){
      if(cmd=="on")leds[i].turnOn();
      else if(cmd=="off")leds[i].turnOff();
      else if(cmd=="flash")leds[i].flash("100"); //default is "50"
      else if(cmd=="status")leds[i].outputState();
      else{ cout << "Invalid command!" << endl; }
   }
   cout << "Finished the myApp program" << endl;
   return 0;
}
