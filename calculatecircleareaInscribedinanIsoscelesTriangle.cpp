#include<iostream>
#include <cmath>
using namespace std;

float CircleArea(float a ,float b){
    float const pi = 3.14;
    float area = pi * (pow(b,2) / 4) * ((2 * a - b) / (2 * a + b));
    return area; 
}
int main(){
    float a ,b;
    cout << "Enter circle a : ";
    cin>>a;
    cout << "Enter circle b : ";
    cin>>b;
    cout <<"circle area is  : "<<CircleArea(a ,b)<<endl;

    return 0;
}