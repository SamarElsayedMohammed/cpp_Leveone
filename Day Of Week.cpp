#include<iostream>
using namespace std;
enum enWeekDays {sunday = 1,monday =2,Tuesday = 3,Wednesday =4,Thursday = 5,Friday =6 ,Saturday =7};
void WeekDaysMenu(){
    cout<<"**********************\n";
    cout<<"1 : sunday \n";
    cout<<"2 : monday \n";
    cout<<"3 : Tuesday \n";
    cout<<"4 : Wednesday \n";
    cout<<"5 : Thursday \n";
    cout<<"6 : Friday \n";
    cout<<"7 : Saturday \n";
    cout<<"**********************\n";
}
void ReadDayOfWeek(int &day){
    WeekDaysMenu();
    cin>>day;
}
string PrintDayOfWeek(int day){
    if (day == enWeekDays::sunday){
        return "sunday";
    }else if (day == enWeekDays::monday){
        return "monday";
    }else if (day == enWeekDays::Tuesday){
        return "Tuesday";
    }else if (day == enWeekDays::Wednesday){
        return "Wednesday";
    }else if (day == enWeekDays::Thursday){
        return "Thursday";
    }else if (day == enWeekDays::Friday){
        return "Friday";
    }else if (day == enWeekDays::sunday){
        return "sunday";
    }else{
        return "wrong day";
    }
}
int main(){
    int day;
    ReadDayOfWeek(day);
    cout << PrintDayOfWeek(day)<<endl;

    return 0;
}