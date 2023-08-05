#include<iostream>
using namespace std;

void mySumProcedures(){
    float num2 ,num1;
    cout <<"enter first number : "<<endl;
    cin>>num1;
    cout <<"enter second number : "<<endl;
    cin>>num2;

    cout<<"the result : "<< num2 + num1<<endl;
}
float mySumFunction(){
    float num2 ,num1;
    cout <<"enter first number : "<<endl;
    cin>>num1;
    cout <<"enter second number : "<<endl;
    cin>>num2;
    return num2 + num1;
}
int main(){

    mySumProcedures();
    cout<< mySumFunction();

    return 0;
}