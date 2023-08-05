#include<iostream>
using namespace std;

int main(){
    int LoanAmount ,monthlyPaymentAmount ;

    cout <<"enter Loan Amount you need : "<<endl;
    cin>>LoanAmount;
    cout <<"enter monthly Payment Amount you can pay : "<<endl;
    cin>>monthlyPaymentAmount;

   int  numbersOfMonth = LoanAmount /monthlyPaymentAmount;
   cout <<"numbers of months of paymentod loan is : "<<numbersOfMonth<<" Months"<<endl;
    return 0;
}