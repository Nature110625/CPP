/*CHAPTER 4: COMPUTATION
Exercise
Question 19: Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add
the name to a vector called names and the number to a vector called scores (in corresponding positions, so that if
names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and
terminate with an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.
            AND
Question 20: Modify the program from exercise 19 so that when you enter a name, the program will output the corresponding score or
name not found.
*/
#include "D:\study\std_lib_facilities.h"
using namespace std;

int in_val{0};                  //will be used in both function

//returns true if the value is already present in argument's vector
bool check_repetition(string val, vector<string>val_table){

    for(int i=0; i<val_table.size(); ++i){ //loop for choosing one element of vector at a time
        if(val_table[i]==val){             //checks whether choosen element of vector is equal to value in argument
            in_val= i;                     //will be used to print corresponding score
            return true;
        }
    }
    return false;               //when if statement doesn't hold for any element
}
int main(){
    vector<string>names;//to store names 
    vector<int>scores;//to store scores

    string val1;
    int val2;
    cout<<"Enter name and value(in integer) pair, such as 'Gyanu 9' and to terminate enter 'NoName, 0': \n";

    bool nduplicate{false};     //use as a input teminating criteria
    while(!nduplicate && (cin>>val1>>val2) && ("NoName"!=val1 || 0!=val2)){     //Takes input and checks restrictions
        if (check_repetition(val1, names)){
            cout<<"Duplicate detected!! Names must be unique.\n";   //Prints error message
            nduplicate=true;    //Terminate next entry
            //return -1; //if terminate means terminating program
        }
        else{       //If input qualifies each restriction
            names.push_back(val1);
            scores.push_back(val2);
        }
    }

    cout<<"\nThe list of entered data: \n";
    for (int i=0; i<names.size(); ++i){     //Prints list of data intered
        cout<<"("<<names[i]<<", "<<scores[i]<<")\n";
    }
    
    //Inputs name and prints corresponding score
    cout<<"\nEnter name to get corresponding score:\n";
    string nval;
    while(cin>>nval){                       //takes entry untill string is entered
        if(check_repetition(nval, names)){
            cout<<"Corresponding score is: "<<scores[in_val]<<'\n';         //'names' element index is used to print corresponding element of 'scores'
        }
        else
            cout<<"Name not found.\n";
    }
    return 0;
}