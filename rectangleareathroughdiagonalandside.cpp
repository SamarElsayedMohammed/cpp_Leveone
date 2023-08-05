#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float a ,b;
    cout<<"Enter two numbers: "; cin>>a >> b ;
    float area = a * sqrt(pow(b,2)-pow(a,2));
    cout << "area of rectangular : "<<area<<endl; 
    return 0;
}