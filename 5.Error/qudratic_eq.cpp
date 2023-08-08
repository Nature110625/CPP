/*
Question 7: Quadratic equations are of the form
                    a · x^2 + b · x + c = 0
To solve these, one uses the quadratic formula:
There is a problem, though: if b2–4ac is less than zero, then it will fail. Write a program that can calculate x for a
quadratic equation. Create a function that prints out the roots of a quadratic equation, given a, b, c. When the program
detects an equation with no real roots, have it print out a message. How do you know that your results are plausible? Can
you check that they are correct?*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

int main(){
    cout<<"Enter three numbers to represent a, b and c of your quadratic equation ax^(2) + bx + c = 0: \n";
    double a{1}, b{0}, c{0}; 
    while (cin>>a>>b>>c) {
        double d= ((b*b)-(4*a*c));//d<0 means the eq. has imaginary roots.
                            //d>=0 means the eq has real roots
        double root_d=sqrt(d);
        double root1 = ((-b)+root_d)/(2.0*a);
        double root2 = ((-b)-root_d)/(2.0*a);
        if(d>=0) {
            cout<<"The roots of equation are: \n"
                <<"     ("<<root1<<", "<<root2<<")\n";
            //checks if roots are plausible
            int res1 = a*root1*root1 + b*root1 + c; //if putting root in place of x satisfies eq. i.e. L.H.S equals R.H.S, the roots are then said to be correct
            int res2 = a*root2*root2 + b*root2 + c;
            if (res1==0 && res2==0)     cout<<"Both result are plausible (correct)";    
            else
                cout<<"Results are not plausible (correct)";
        }
        else{ 
            cerr<<"The equation has no real roots."; //quadratic equation has either two roots either real or imaginary
        }
    }
}