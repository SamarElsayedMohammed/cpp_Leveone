#include<iostream>
#include <cmath>
using namespace std;

float CircleArea(float l){
    float const pi = 3.14;
    float area = pow(l,2)/(4*pi);
    return area; 
}

int main(){

    float l;
    cout << "Enter circle l : ";
    cin>>l;
    cout <<"circle area is  : "<<CircleArea(l)<<endl;

    return 0;
}