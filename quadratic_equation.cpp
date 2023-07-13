/*chapter 4: COMPUTATION 
Exercise
Question 18: Write a program to solve quadratic equations. A quadratic equation is of the form
                                ax2 + bx + c = 0
If you don’t know the quadratic formula for solving such an expression, do some research. Remember, researching how
to solve a problem is often necessary before a programmer can teach the computer how to solve it. Use doubles for the
user inputs for a, b, and c. Since there are two solutions to a quadratic equation, output both x1 and x2.

Approach to solve the question:
    1. check if the quadratic equation has roots.
    2. If the quadratic equation has roots, put the value of a, b, and c in the formula of finding roots.
    3. Print message if it has no roots.*/
#include "D:\study\std_lib_facilities.h"
using namespace std;

int main(){
    cout<<"Enter three numbers to represent a, b and c of your quadratic equation ax^(2) + bx + c = 0: \n";
    double a{1}, b{0}, c{0}; 
    cin>>a>>b>>c;
    double d= ((b*b)-(4*a*c));//d<0 means the eq. has imaginary roots.
                            //d>=0 means the eq has real roots
    double root_d=sqrt(d);
    double root1 = ((-b)+root_d)/(2.0*a);
    double root2 = ((-b)-root_d)/(2.0*a);
    if(d>=0) {
        cout<<"The roots of equation are: \n"
            <<"     ("<<root1<<", "<<root2<<")\n";
    }
    else 
        cout<<"The equation has no real roots."; //quadratic equation has either two roots either real or imaginary
}