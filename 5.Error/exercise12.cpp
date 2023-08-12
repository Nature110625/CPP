/* 
Question 12: Implement a little guessing game called (for some obscure reason) “Bulls and Cows.” The program has a vector of four
different integers in the range 0 to 9 (e.g., 1234 but not 1122) and it is the user’s task to discover those numbers by
repeated guesses. Say the number to be guessed is 1234 and the user guesses 1359; the response should be “1 bull and 1
cow” because the user got one digit (1) right and in the right position (a bull) and one digit (3) right but in the wrong
position (a cow). The guessing continues until the user gets four bulls, that is, has the four digits correct and in the correct
order.*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

int main(){
    //char data type helps to store digits of 4 digit number seperately and evaluation easy
    vector<char>o_num = {'1', '2', '3', '6'}; //program's 4 digit number

    cout<<"Enter the four digit number whose digits are unique\n";
    bool exit_c=false;

    //loop to to take entry repititively until user wins
    while(!exit_c){
        vector<char>e_num;  //player gussed 4 digit number
        char val{'1'};

        //stores players entry in a vector
        for(int i=0; i<4; ++i) {
            cin>>val;
            e_num.push_back(val);
        }

        int c_bull{0};
        int c_cow{0};

        //compares player guessed 4 digit number with program's 4 digit number
        for(int i1=0; i1<e_num.size(); ++i1) {      //select element from user guessed number's vector
            for(int i2=0; i2<o_num.size(); ++i2){       //select element from program's number vector
                if (e_num[i1]==o_num[i2]){      //checks if numbers matches
                    if(i1==i2)      ///checks if position of matched numbers matches
                        ++c_bull;
                    else
                        ++c_cow;
                }
            }
        }

        //prints numbers of cows and bulls
        cout<<c_bull<<" bull and "<<c_cow<<" cow.\n";

        if(c_bull==4){
            cout<<"You have guessed right!!";
            exit_c=true;
        }
        else
            cout<<"Try again: ";
    }
    return 1;
}