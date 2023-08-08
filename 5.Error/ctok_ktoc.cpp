/*
Question 5: Add to the program so that it can also convert from Kelvin to Celsius.*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

double ctok(double val){ // converts Celsius to Kelvin and print temp in kelvin
    double numk = val + 273.15;

    if(numk<0)                 //checks if entered temperature is less than Absolute zero
        error("Invalid Entry: temperature can't be less than -273.15 degree celsius");      //If check is true produce an error

    cout<<"Temperature in kelvin is "<<numk<<"K \n";
    return 0.0;
}

double ktoc(double val){ // converts Kelvin to Celsius and prints temp in celsius
    double numc = val - 273.15;

    if(val<0)                 //checks if entered temperature is less than Absolute zero
        error("Invalid Entry: temperature can't be less than -273.15 degree celsius");      //If check is true produce an error

    cout<<"Temperature in degree celsius is "<<numc<<"\n";
    return 0.0;
}

int main(){
    double num{0};
    char nunit{'c'};
    cout<<"Enter temperature and unit (c for celsius and k for kelvin):\n";
    while(cin>>num>>nunit){         //Accept entry until double and then char is entered 
        switch(nunit){
            case 'c':
                ctok(num);
                break;
            case 'k':
                ktoc(num);
                break;
            default:
                cout<<"Invalid entry!!!";           
                break;
        }
    }
    return 0;
}