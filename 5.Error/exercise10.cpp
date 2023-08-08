/*
Question 10: Modify the program from exercise 8 to use double instead of int. Also, make a vector of doubles containing the N–1
differences between adjacent values and write out that vector of differences.*/
#include "D:\study\std_lib_facilities.h"
using namespace std;

int main(){
    int nval{0};
    cout<<"Enter the number of values you want to sum: ";
    cin>>nval;

    vector<double>numbers;
    cout<<"Enter some numbers (press '|' to stop): ";
    for(double num{0}; cin>>num;){             //stores value in vector
        numbers.push_back(num);
    }

    if (nval>=numbers.size())               //checks exception
        error("invalid intry: sufficient numbers are not entered. ");
    
    //sum nval numbers from vector
    double sum{0};
    for(int i{0}; i<nval; ++i){
        sum += numbers[i];
    }

    cout<<"Sum of  "<<nval<<" numbers == "<<sum<<'\n';        //prints sum

    //vector containing differences of adjacent elements of vector numbers
    vector<double>diff_num;
    double diff{0};
    for(int i=1; i<numbers.size(); ++i){
        //if else statement is used to get positive differences 
        if (numbers[i]>=numbers[i-1]){
            diff=numbers[i] - numbers[i-1];
            diff_num.push_back(diff);
        }
        else{
            diff=numbers[i-1] - numbers[i];
            diff_num.push_back(diff);
        }
    }
    
    //Prints the differences
    cout<<"\nThe elements of vector of differences are: ";
    for(double val:diff_num)
        cout<<"\n"<<val;
}