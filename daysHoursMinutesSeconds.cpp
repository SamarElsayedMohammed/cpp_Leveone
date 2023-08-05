#include<iostream>
using namespace std;

void TranslateSeconds(int EnterSeconds){
        int days, hours, minutes,  seconds,reminder;
    int SecondsPerDay= 24 * 60 * 60,
        SecondsPerHour = 60 * 60,
        SecondsPerMinute= 60;
    days = EnterSeconds / SecondsPerDay;
    reminder =EnterSeconds % SecondsPerDay;
    hours = reminder/SecondsPerHour;
    reminder = reminder % SecondsPerHour;
    minutes = reminder / SecondsPerMinute;
    reminder = reminder % SecondsPerMinute;
    seconds = reminder;

    // hours = (seconds % SecondsPerDay)/SecondsPerHour;
    // minutes = ((seconds % SecondsPerDay )% SecondsPerHour)/SecondsPerMinute;
    // seconds = (((seconds % SecondsPerDay )% SecondsPerHour)%SecondsPerMinute);

    cout<<days<<":"<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
int main(){
int seconds;
    cout<<"Enter the number of Seconds: "; 
    cin >>seconds;
    TranslateSeconds(seconds);
    return 0;
}