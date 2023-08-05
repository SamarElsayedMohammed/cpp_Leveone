#include<iostream>
using namespace std;

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

    int durationInSeconds = seconds + minutes*60 + hours*60*60 + days*24*60*60;
    cout<<"total seconds is : "<<durationInSeconds<<endl;

    return 0;
}