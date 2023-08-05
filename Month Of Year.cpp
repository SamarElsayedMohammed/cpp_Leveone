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
    if (month == enYearMonths::January ){
        return "January";
    }else if (month == enYearMonths::February ){
        return "February";
    }else if (month ==enYearMonths::March ){
        return "March";
    }else if (month == enYearMonths::April ){
        return "";
    }else if (month == enYearMonths::May ){
        return "May";
    }else if (month == enYearMonths::June ){
        return "June";
    }else if (month == enYearMonths::July ){
        return "July";
    }else if (month == enYearMonths::August ){
        return "August";
    }else if (month == enYearMonths::September ){
        return "September";
    }else if (month == enYearMonths::October ){
        return "October";
    }else if (month == enYearMonths::November ){
        return "November";
    }else if (month == enYearMonths::December ){
        return "December";
    }else{
        return "wrong month";
    }
}
int main(){
    int month;
    ReadMonthOfYear(month);
    cout << PrintMonthOfYear(month)<<endl;

    return 0;
}