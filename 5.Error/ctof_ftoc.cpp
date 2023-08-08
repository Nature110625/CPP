/*
Question 6: Write a program that converts from Celsius to Fahrenheit and from Fahrenheit to Celsius. Use
estimation to see if your results are plausible.*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

double ctof(double numc){ // converts Celsius to farenhite and print temp in farenhite
    double numf = (9.0/5)*numc+32;

    if((numc+273.15)<0)                 //checks if entered temperature is less than Absolute zero
        error("Invalid Entry: temperature can't be less than -273.15 degree celsius");      //If check is true produce an error

    cout<<"Temperature in farenhite is "<<numf<<"\n";
    return 0.0;
}

double ftoc(double numf){ // converts farenhite to Celsius and prints temp in celsius
    double numc = (numf - 32)*5.0/9;

    if((numc+273.15)<0)                 //checks if entered temperature is less than Absolute zero
        error("Invalid Entry: temperature can't be less than -273.15 degree celsius");      //If check is true produce an error

    cout<<"Temperature in degree celsius is "<<numc<<"\n";
    return 0.0;
}

int main(){
    double num{0};
    char nunit{'c'};
    cout<<"Enter temperature and unit (c for celsius and f for farenhite):\n";
    while(cin>>num>>nunit){         //Accept entry until double and then char is entered 
        switch(nunit){
            case 'c':
                ctof(num);
                break;
            case 'f':
                ftoc(num);
                break;
            default:
                cout<<"Invalid entry!!!";           
                break;
        }
    }
    return 0;
}