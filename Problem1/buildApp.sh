#Program that builds files relating to HW7 for CPE422
#builds derek_LED.cpp, derek_LED.h, and myApp.cpp into myApp executable

#!/bin/bash



echo "Building file myApp"
g++ -o myApp derek_LED.cpp derek_LED.h myApp.cpp
echo "Finished"
