/*CHAPTER 4: COMPUTATION
Exercise
Question 17: Write a program that finds the min, max, and mode of a sequence of strings.
    */
#include "D:\study\std_lib_facilities.h"
using namespace std;

int main() {
    vector<string>num_table;
    cout<<"Enter strings, to stop entering type ctrl+z or any thing other than string:\n";
    for(string val; cin>>val;)
        num_table.push_back(val);
    
    sort(num_table.begin(), num_table.end());               //arranges elements of vector in ascending order
    
    //get min and max of  the sequence
    string nmin{num_table[0]};                              //first entry is minimum
    string nmax{num_table[num_table.size()-1]};             //last entry is maximumm
    cout<<"The maximum of string entered: "<<nmax<<'\n'
        <<"The minimum of string entered: "<<nmin<<'\n';
    
    //computes mode of entered sequence:
    int ncount{1};
    int max_count{1};
    string previous_string{num_table[0]};
    string mode_string{"Not Applicable"};
    for(int i = 1; i<num_table.size();++i){                 //choose an element at a time from vector
        if(previous_string==num_table[i])                   //updates counter if string is repeated
            ++ncount;
        else                                                //reset counter if string is not repeated 
            ncount=1;
        
        //updates mode if needed
        if(ncount>max_count){
            mode_string=num_table[i];
            max_count=ncount;
        }
        previous_string=num_table[i];                       //updates previous element as current element changes
    }
    cout<<"The mode of string entered: "<<mode_string<<" with "<<max_count<<" appearances.";

    return 0;
}
