/* 
Question 11: Write a program that writes out the first so many values of the Fibonacci series, that is, the series that starts with 1 1 2 3
5 8 13 21 34. The next number of the series is the sum of the two previous ones. Find the largest Fibonacci number that
fits in an int.*/

#include "D:\study\std_lib_facilities.h" 
using namespace std;

int main() {
    int val1{1}, val2{1}, val{0};
    double check_val{0};

    //prints first two element of fibonacci series
    cout<<"Fibonacci series:"
        <<'\n'<<val1
        <<'\n'<<val2;

    //loop to find and print elements of fibonacci series till it fits in int
    while(val<1200000000){
        val = val1+val2;
        cout<<'\n'<<val;        
        val1=val2;
        val2=val;
    }

    cout<<"\nThe largest number that fits into int is "<<val;
}