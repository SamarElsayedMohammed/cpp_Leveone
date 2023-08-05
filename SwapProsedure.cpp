#include <iostream>
using namespace std;

void SwapProsedure(int &num1 ,int &num2){

    int temp = num1 ;
    num1=num2;
    num2=temp;
    cout << "numbers after swap are : "<< num1 << " "<< num2<<endl;
}

int main(){
    int num1 ,num2;
    cout <<"Enter first number : ";
    cin>>num1;
    cout <<"Enter second number : ";
    cin>>num2;
    cout<<"number before swaping : "<< num1 <<" "<< num2<<endl;
    SwapProsedure(num1,num2);
    cout<<"number before swaping : "<< num1 <<" "<< num2<<endl;
    return 0;
}