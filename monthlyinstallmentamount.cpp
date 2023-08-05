#include<iostream>
using namespace std;

int main(){
    int LoanAmount ,numberOfMonths ;

    cout <<"enter Loan Amount you need : "<<endl;
    cin>>LoanAmount;
    cout <<"enter number of month to pay your loan : "<<endl;
    cin>>numberOfMonths;

   int  MonthlyInstallment = LoanAmount /numberOfMonths;
   cout <<"amout per month is : "<<MonthlyInstallment<<endl;
    return 0;
}