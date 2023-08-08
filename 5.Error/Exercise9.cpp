/*
Question 9: Modify the program from exercise 8 to write out an error if the result cannot be represented as an int.*/
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
    double check_sum{0};
    for(int i{0}; i<nval; ++i){
        sum += numbers[i];
        check_sum += numbers[i];
    }

    //write error message and terminate the program if the result cannot be represented as an int 
    if(check_sum!=sum){
        error("Result cannot be represented as an int.");
    }

    cout<<"\nSum of  "<<nval<<" numbers == "<<sum;        //prints sum

}