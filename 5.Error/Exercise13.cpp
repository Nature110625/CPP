/* 
Question 13: The program is a bit tedious because the answer is hard-coded into the program. Make a version where the user can play
repeatedly (without stopping and restarting the program) and each game has a new set of four digits. You can get four
random digits by calling the random number generator randint(10) from std_lib_facilities.h four times. You will note
that if you run that program repeatedly, it will pick the same sequence of four digits each time you start the program. To
avoid that, ask the user to enter a number (any number) and call srand(n) where n is the number the user entered before
calling randint(10). Such an n is called a seed, and different seeds give different sequences of random numbers.*/

#include "D:\study\std_lib_facilities.h"
using namespace std;

//checks if program has vector of four different integers or not
bool check_repeatition(vector<int>entry1){
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
int check_bulls(vector<int>ans2, vector<int>entry2) {
    int bull_n{0}, cow_n{0};
    for(int i=0; i<=3; ++i){
        for(int n=0; n<=3; ++n){
            if (entry2[i]==ans2[n] && i==n)
                ++bull_n;
            else if (entry2[i]==ans2[n] && i!=n)
                ++cow_n;
        }
    }
    cout<<'\n'<<bull_n<<" bulls and "<<cow_n<<" cows\n";
    return bull_n;
}

int main(){
    //prints game discription
    cout<<"BULLS AND COWS\n"
        <<"In this game you have to guess four digit number of four different integers (in the range 0 to 9)\n"
        <<"You have to discover those numbers by repeated guess.\n"
        <<"Say number to be guessed is 1234 and you guesses 1359, the response should be '1 bull and 1 cow' "
        <<"\nbecause you got one digit (1) right and in a right position (a bull) and one digit (3) right but in a wrong position (a cow)\n"
        <<"You can guess until you gets four bull.\n"
        <<"\nLet's start the game";
    
    bool check=false;
    while(!check) {
        cout<<"\nTo start game enter a number (character other than number will terminate the game):";
        int num{0};
        cin>>num;
        srand(num); //different argument of srand leads to different randomint set of four numbers
        
        //generate four random digits (in the range 0 to 9) of four digit number for player to discover
        int val1 = randint(10);
        int val2 = randint(10);
        int val3 = randint(10);
        int val4 = randint(10);

        vector<int>ans={val1, val2, val3, val4};   //stores the number that player has to guess

        bool check2=false;
        while(!check2){
            vector<int>entry;   //stores the number user has entered
            int a, b, c, d;
            
            //takes entry from player
            cout<<"\nGuess four digit number of four different integers\n"
                <<"enter digit at ones place: ";
            cin>>a;
            cout<<"enter digit at tens place: ";
            cin>>b;
            cout<<"enter digit at hundreds place: ";
            cin>>c;
            cout<<"enter digit at thousands place: ";
            cin>>d;
            
            //fill player's entered digits in entry vector 
            entry.push_back(a);
            entry.push_back(b);
            entry.push_back(c);
            entry.push_back(d);
            
            if(check_repeatition(entry)) {  //if statements run if digits of four digit number entered by player are not repeated
                if(check_bulls(ans, entry)==4){
                    check2=true; //leads to exit from while loop if player gets four bull
                }
            }
        }
    }
    return 0;
}