/*
Question 4: Do exercise 3 again, but this time handle the error inside ctok().*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
double k = c + 273.15;

if(k<0)                 //checks if entered temperature is less than Absolute zero
    error("Invalid Entry: temperature can't be less than -273.15 degree celsius");      //If check is true produce an error

return k;
}

int main()
{
double c{0};            // declare input variable
cin>> c;                // retrieve temperature to input variable
double k {ctok(c)};     // convert temperature

cout<< k << '\n' ;      // print out temperature
}