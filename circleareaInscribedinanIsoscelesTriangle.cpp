#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float sideA,sideB ;
    cout <<"enter  sideA : ";
    cin>>sideA;
    cout <<"enter  sideB : ";
    cin>>sideB;
    const float pi =3.14;
    int area = floor(pi * (pow(sideB,2)/4) * (((2*sideA) - sideB)/((2*sideA) + sideB)));
    cout <<"circle area is : "<< area <<endl;
    return 0;
}