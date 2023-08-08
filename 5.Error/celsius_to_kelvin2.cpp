/*
Question 3: Absolute zero is the lowest temperature that can be reached; it is –273.15°C, or 0K. The above program, even when
corrected, will produce erroneous results when given a temperature below this. Place a check in the main program that
will produce an error if a temperature is given below –273.15°C.*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
double k = c + 273.15;
return k;
}

int main()
{
double c{0};            // declare input variable
cin>> c;                // retrieve temperature to input variable
double k {ctok(c)};     // convert temperature

if(k<0)                 //checks if entered temperature is less than Absolute zero
    error("Invalid Entry: temperature can't be less than -273.15 degree celsius");      //If check is true produce an error

cout<< k << '\n' ;      // print out temperature
}