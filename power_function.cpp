#include<iostream>
#include <cmath>
using namespace std;

void PowerProsedure(int num){
    cout << num <<" ^ 2 : "<<pow(num ,2)<<endl;
    cout << num <<" ^ 3 : "<<pow(num ,3)<<endl;
    cout << num <<" ^ 4 : "<<pow(num ,4)<<endl;
}
int main(){

    int num;
    cout << "Enter number : ";
    cin>>num;
    PowerProsedure(num);
    cout <<endl;

    return 0;
}