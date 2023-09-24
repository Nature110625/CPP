/* 
Question 12: Implement a little guessing game called (for some obscure reason) “Bulls and Cows.” The program has a vector of four
different integers in the range 0 to 9 (e.g., 1234 but not 1122) and it is the user’s task to discover those numbers by
repeated guesses. Say the number to be guessed is 1234 and the user guesses 1359; the response should be “1 bull and 1
cow” because the user got one digit (1) right and in the right position (a bull) and one digit (3) right but in the wrong
position (a cow). The guessing continues until the user gets four bulls, that is, has the four digits correct and in the correct
order.*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

//checks if program has vector of four different integers or not
bool check_repeatition(vector<char>entry1){
    int check_r{0};

    for(int i=0; i<=3; ++i){
        for(int n=0; n<=3; ++n){
            if (entry1[i]==entry1[n] && i!=n)
                ++check_r;  //one is added to check_r for every repeatition
        }
    }
    if (check_r==0)
        return true;    //returns true if there is no repeatition
    else
        return false;
}

//find and print numbers of bulls and cows, and return number of bulls 
int check_bulls(vector<char>ans2, vector<char>entry2) {
    int bull_n{0}, cow_n{0};
    for(int i=0; i<=3; ++i){
        for(int n=0; n<=3; ++n){
            if (entry2[i]==ans2[n] && i==n)
                ++bull_n;
            else if (entry2[i]==ans2[n] && i!=n)
                ++cow_n;
        }
    }
    cout<<bull_n<<" bulls and "<<cow_n<<" cows";
    return bull_n;
}

int main(){
    cout<<"BULLS AND COWS\n"
        <<"In this game you have to guess four digit number of four different integers (in the range 0 to 9)\n"
        <<"You have to discover those numbers by repeated guess.\n"
        <<"Say number to be guessed is 1234 and you guesses 1359, the response should be '1 bull and 1 cow' "
        <<"\nbecause you got one digit (1) right and in a right position (a bull) and one digit (3) right but in a wrong position (a cow)\n"
        <<"You can guess until you gets four bull.\n"
        <<"\nLet's start the game";
    vector<char>ans={'1', '2', '3', '4'};   //the that player has to guess
    bool check=false;
    while(!check){
        vector<char>entry;
        char a, b, c, d;
        cout<<"\nEnter a four digit number of four different integers:";
        cin>>a>>b>>c>>d;
        entry.push_back(a);
        entry.push_back(b);
        entry.push_back(c);
        entry.push_back(d);
        if(check_repeatition(entry)) {
            if(check_bulls(ans, entry)==4){
                check=true; //leads to exit from while loop
            }
        }
    }
    return 0;
}