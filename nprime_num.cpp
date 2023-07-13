/*CHAPTER 4: COMPUTATION
Exercise
Question 15: Write a program that takes an input value n and then finds the first n primes.
*/
#include "D:\study\std_lib_facilities.h"
using namespace std;

bool check_prime(int val, vector<int>val_vector){               //checks if value is prime or not
    for (int x:val_vector){
        if(val<x || val%x == 0)
            return false;                                       //value is not prime
    }
    return true;                                                //value is prime
}
int main(){
    vector<int>nprimes{2};
    cout<<"Enter an integer greater than 1 as value of p, to represent first p prime numbers.";
    
    bool valid_entry=false;
    int p{1};
    while(!valid_entry){                                        //confirms valid entry
        if(cin>>p && p>1)
            valid_entry=true;
        else
            cout<<"Enter an integer greater than 1:";
    }
    for(int i=1; nprimes.size()< p; ++i)
        if(check_prime(i, nprimes))
            nprimes.push_back(i);
    
    cout<<"The first "<<p<<" prime numbers are: \n";
    for(int num=0; num<p;++num){
        cout<<nprimes[num]<<" ";
        if((num+1)%25==0)                                        //breaks line after 25 primes
            cout<<'\n';
    }
    return 0;
}