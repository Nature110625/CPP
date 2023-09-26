/*
EXERCISE 14: Read (day-of-the-week,value) pairs from standard input. For example: Tuesday 23 Friday 56 Tuesday –3 Thursday 99
Collect all the values for each day of the week in a vector<int>. Write out the values of the seven day-of-the-week
vectors. Print out the sum of the values in each vector. Ignore illegal days of the week, such as Funday, but accept
common synonyms such as Mon and monday. Write out the number of rejected values.*/

#include "D:\study\std_lib_facilities.h"
using namespace std;
//prints values of vector and sum of values of vector in argument
int print_vector(vector<int>day_vector){
    int vector_sum{0};
    for(int x:day_vector){
        cout<<x<<'\n';
        vector_sum += x;
    }
    cout<<"Sum of values is == "<<vector_sum<<'\n';
}

int main(){
    //declaration of vectors for storing values for each day of week
    vector<int>m_value;
    vector<int>t_value;
    vector<int>w_value;
    vector<int>th_value;
    vector<int>f_value;
    vector<int>s_value;
    vector<int>u_value;

    string day_name{"Sunday"};
    int day_value{0}, r_value{0};
    cout<<"Enter (day of the week, value) pairs {to terminate entry enter ctrl+z}:";
    
    //take entry of days-of-the-week and value pair
    while(cin>>day_name && cin>>day_value){
        if (day_name=="Monday"||day_name=="MONDAY"||day_name=="Mon"||day_name=="MON"||day_name=="monday"||day_name=="M"||day_name=="m"||day_name=="mon")
            m_value.push_back(day_value);
        else if (day_name=="Tuesday"||day_name=="TUESDAY"||day_name=="Tue"||day_name=="TUE"||day_name=="tuesday"||day_name=="T"||day_name=="t"||day_name=="tue")
            t_value.push_back(day_value);
        else if (day_name=="Wednesday"||day_name=="WEDNESDAY"||day_name=="Wed"||day_name=="WED"||day_name=="wednesday"||day_name=="W"||day_name=="w"||day_name=="wed")
            w_value.push_back(day_value);
        else if (day_name=="Thursday"||day_name=="THURSDAY"||day_name=="Thu"||day_name=="THU"||day_name=="thursday"||day_name=="Th"||day_name=="th"||day_name=="thu")
            th_value.push_back(day_value);
        else if (day_name=="Friday"||day_name=="FRIDAY"||day_name=="Fri"||day_name=="FRI"||day_name=="friday"||day_name=="F"||day_name=="f"||day_name=="fri")
            f_value.push_back(day_value);
        else if (day_name=="Saturday"||day_name=="SATURDAY"||day_name=="Sat"||day_name=="SAT"||day_name=="saturday"||day_name=="S"||day_name=="s"||day_name=="sat")
            s_value.push_back(day_value);
        else if (day_name=="Sunday"||day_name=="SUNDAY"||day_name=="Sun"||day_name=="SUN"||day_name=="sunday"||day_name=="U"||day_name=="u"||day_name=="sun")
            u_value.push_back(day_value);
        else
            ++r_value;  //stores rejected value
    }

    //prints value and sum of values of each day of week
    cout<<"\nValues of Monday:\n";
    print_vector(m_value);
    cout<<"\nValues of Tuesday:\n";
    print_vector(t_value);
    cout<<"\nValues of Wednesday:\n";
    print_vector(w_value);
    cout<<"\nValues of Thursday:\n";
    print_vector(th_value);
    cout<<"\nValues of Friday:\n";
    print_vector(f_value);
    cout<<"\nValues of Saturday:\n";
    print_vector(s_value);
    cout<<"\nValues of Sunday:\n";
    print_vector(u_value);

    //prints rejected value
    cout<<"\nThe number of rejected values is: "<<r_value;

    return 0;
}