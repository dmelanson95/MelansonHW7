#file used to build the bank account files into a file called bankApp

#!/bin/bash


echo "Building bank files."
g++ -o bankApp bankAccount.h bankAccount.cpp bankApp.cpp
chmod +x bankBuild.sh
echo "Done building."
