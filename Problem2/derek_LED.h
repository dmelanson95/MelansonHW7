/* Class written by Derek Molloy and edited by David Melanson
 * for CPE 422 Fall 2023 Homework 7
 *
 */


#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

class LED{
   private:
      string path;
      int number;
      virtual void writeLED(string filename, string value);
      virtual void removeTrigger();
   public:
      LED(int number);
      virtual void blink(int num);
      virtual void turnOn();
      virtual void turnOff();
      virtual void flash(string delayms);
      virtual void outputState();
      virtual ~LED();
};
