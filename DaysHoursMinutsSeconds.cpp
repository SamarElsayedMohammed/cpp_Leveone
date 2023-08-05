#include<iostream>
using namespace std;

int main(){
    int days, hours, minutes,  seconds,reminder;
    int SecondsPerDay= 24 * 60 * 60,
        SecondsPerHour = 60 * 60,
        SecondsPerMinute= 60;
    cout<<"Enter the number of Seconds: "; 
    cin >>seconds;
    days = seconds / SecondsPerDay;
    reminder =seconds % SecondsPerDay;
    hours = reminder/SecondsPerHour;
    reminder = reminder % SecondsPerHour;
    minutes = reminder / SecondsPerMinute;
    reminder = reminder % SecondsPerMinute;
    seconds = reminder;

    // hours = (seconds % SecondsPerDay)/SecondsPerHour;
    // minutes = ((seconds % SecondsPerDay )% SecondsPerHour)/SecondsPerMinute;
    // seconds = (((seconds % SecondsPerDay )% SecondsPerHour)%SecondsPerMinute);

    cout<<days<<":"<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}