#include<iostream>
using namespace std;

enum enYearMonths { January =1
, February =2
, March =3
,  April =4
,  May =5
, June=6
,  July=7
,  August=8
,  September =9
, October =10
, November =11
, December =12 
};

void MonthOfYearMenu(){
    cout<<"**********************\n";
    cout<<"• 1  : January \n";
    cout<<"• 2  : February \n";
    cout<<"• 3  : March \n";
    cout<<"• 4  : April \n";
    cout<<"• 5  : May \n";
    cout<<"• 6  : June \n";
    cout<<"• 7  : July \n";
    cout<<"• 8  : August \n";
    cout<<"• 9  : September \n";
    cout<<"• 10 : October \n";
    cout<<"• 11 : November \n";
    cout<<"• 12 : December \n";
    cout<<"**********************\n";
}

void ReadMonthOfYear(int &month){
    MonthOfYearMenu();
    cin>>month;
}

string PrintMonthOfYear(int month){
    switch (month)
    { 
    case enYearMonths::January :
        return "January";
        break;
    case enYearMonths::February :
        return "February";
    case enYearMonths::March :
        return "March";
         break;
    case enYearMonths::April :
        return "April";
         break;
    case enYearMonths::May :
        return "May";
         break;
    case enYearMonths::June :
        return "June";
         break;
    case enYearMonths::July :
        return "July";
         break;
    case enYearMonths::August :
        return "August";
         break;
    case enYearMonths::September :
        return "September";
         break;
    case enYearMonths::October :
        return "October";
         break;
    case enYearMonths::November :
        return "November";
         break;
    case enYearMonths::December :
        return "December";
         break;
    default:
        return "wrong month";
        break;
    }
}
int main(){

    int month;

    ReadMonthOfYear(month);

    cout <<"year of month is : "<< PrintMonthOfYear(month)<<endl;

    return 0;
}