/*CHAPTER 5: ERROR
Exercise
Question 2: The following program takes in a temperature value in Celsius and converts it to Kelvin. This code has many errors in it.
Find the errors, list them, and correct the code.

    double ctok(double c) // converts Celsius to Kelvin
    {
    int k = c + 273.15;
    return int
    }
    int main()
    {
    double c = 0; // declare input variable
    cin >> d; // retrieve temperature to input variable
    double k = ctok("c"); // convert temperature
    Cout << k << '/n' ; // print out temperature
    }
    
    Answer:
        1. k should be double.
        2. instead of 'return int', it should be 'return k'
        3. Semicolon is missing after 'return k'
        4. Instead of d there should be c
        5. remove semicolon from c
        6. newline is written wrongly
        Note: We should use curly bracket to initialize variable.*/

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
cout<< k << '\n' ;      // print out temperature
}