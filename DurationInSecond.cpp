#include<iostream>
using namespace std;

void Seconds(int days,int hours ,int minutes ,int seconds){
    int durationInSeconds = seconds + minutes*60 + hours*60*60 + days*24*60*60;
    cout<<"total seconds is : "<<durationInSeconds<<endl;
}

int main(){
    int days, hours, minutes,  seconds;
    cout << "Enter Days"<<endl;
    cin>>days;
    cout << "Enter Hours"<<endl;
    cin>>hours;
    cout << "Enter minutes"<<endl;
    cin>>minutes;
    cout << "Enter seconds"<<endl;
    cin>>seconds;

    Seconds(days, hours, minutes,  seconds);


    return 0;
}