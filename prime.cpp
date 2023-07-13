/*Part I
chapter 4 - Computation 
link for all questions and answer (https://programming-principles-and-pratice-using-c.readthedocs.io/en/latest/ch4-computation.html)
Exercise
Question 13: Create a program to find all the prime numbers between 1 and 100. There is a classic method for doing this, called the
“Sieve of Eratosthenes.” If you don’t know that method, get on the web and look it up. Write your program using this
method.
question14: Modify the program described in the previous exercise to take an input value max and then find all prime numbers from
1 to max
Approach to solve question:
    1. create a variable that store maximum number upto which prime numbers are needed.
    2. create a list of consecutive integers from 2 to nmax. 
    3. initially let i = 2. The smallest prime number.
    4. enumerate the multiples of i from 2i to nmax and mark them in the list.
    5. After marking assign i to the next unmarked number. Since that is the next prime. If there is no such number, Stop.
    6. After termination all unmarked numbers are prime.*/
#include "D:\study\std_lib_facilities.h"
using namespace std;
int nmax{100};
vector<int>numbers(nmax+1);//Here, index of vector is list of consecutive integers.

int main(){
    int nmax{100};
    cout<<"enter the number upto which you want prime numbers.";
    cin>>nmax;
    vector<int>numbers(nmax+1);
    for (int n=0; n<numbers.size(); ++n)
        numbers[n]=false;
    //This loop initializes false to each element of vector - numbers
    //Non initialized elements of vector by default have value 0 i.e. false
    for (int i=2; i<numbers.size(); ++i) { 
        if(false==numbers[i]){//checks if i is prime. Initialize cval to 2i to mark the multiples of i, if i is prime
            int cval {i*2};
            while(cval<=nmax){ //mark by giving true value to all multiples of i less than nmax except i 
                numbers[cval]=true; 
                cval+=i;
            }
        }
    }
    cout<<"prime numbers between 2 to "<<nmax<<" are: \n";
    for (int num = 2; num<numbers.size(); ++num){//print all primes from 2 to nmax
        if(numbers[num]==false)//false value implies prime no. since all multiples are assigned true.
        cout<<num<<'\n';
    }
}  