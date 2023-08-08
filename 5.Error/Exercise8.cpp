/*
Question 8: Write a program that reads and stores a series of integers and then computes the sum of the first N integers. First ask for
N, then read the values into a vector, then calculate the sum of the first N values. For example:
“Please enter the number of values you want to sum:”
3
“Please enter some integers (press '|' to stop):”
12 23 13 24 15 |
“The sum of the first 3 numbers ( 12 23 13 ) is 48.”
Handle all inputs. For example, make sure to give an error message if the user asks for a sum of more numbers than there
are in the vector.*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

int main(){
    int nval{0};
    cout<<"Enter the number of values you want to sum: ";
    cin>>nval;

    vector<int>numbers;
    cout<<"Enter some integers (press '|' to stop): ";
    for(int num{0}; cin>>num;){             //stores value in vector
        numbers.push_back(num);
    }

    if (nval>=numbers.size())               //checks exception
        error("invalid intry: sufficient numbers are not entered. ");
    
    //sum nval numbers from vector
    int sum{0};
    for(int i{0}; i<nval; ++i){
        sum += numbers[i];
    }

    cout<<"Sum of  "<<nval<<" numbers == "<<sum;        //prints sum

}