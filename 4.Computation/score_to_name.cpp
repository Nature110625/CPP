/*CHAPTER 4: COMPUTATION
Exercise
Question 19: Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add
the name to a vector called names and the number to a vector called scores (in corresponding positions, so that if
names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and
terminate with an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.
            AND
Question 21: Modify the program from exercise 19 so that when you enter an integer, the program will output all the names with that
score or score not found.
*/
#include "D:\study\std_lib_facilities.h"
using namespace std;

vector<string>names;//to store names 
vector<int>scores;//to store scores

//returns true if the value is already present in argument's vector
bool check_repetition(string val){

    for(int i=0; i<names.size(); ++i){ //loop for choosing one element of vector at a time
        if(names[i]==val){             //checks whether choosen element of vector is equal to value in argument
            return true;
        }
    }
    return false;               //when if statement doesn't hold for any element
}

bool prints_names(int num){      //find and print names corresponding to given argument
    bool num_status=false;      //will be used as return value 
    for(int i=0; i<scores.size(); ++i){    
        if (scores[i]==num){
            cout<<names[i]<<'\n';
            num_status=true;                //updates num_status if score is found in scores vector
        }
    }
    
    if(!num_status){           //if score is not found in scores vector
        cout<<"Score not found!!\n";
    }
    return 0;
}

int main(){
    string val1;
    int val2;
    cout<<"Enter name and value(in integer) pair, such as 'Gyanu 9' and to terminate enter 'NoName, 0': \n";

    bool nduplicate{false};     //use as a input teminating criteria
    while(!nduplicate && (cin>>val1>>val2) && ("NoName"!=val1 || 0!=val2)){     //Takes input and checks restrictions
        if (check_repetition(val1)){
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
    
    //Input score and prints corresponding names
    int e_score;
    cout<<"\nEnter an integer to get corresponding names: ";
    while (cin>>e_score){
        cout<<"corresponding names are\n";
        prints_names(e_score);
    }
    
    return 0;
}