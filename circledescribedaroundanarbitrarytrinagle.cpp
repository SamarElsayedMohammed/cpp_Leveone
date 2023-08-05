#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float sideA,sideB,sideC ;
    cout <<"enter  sideA : ";
    cin>>sideA;
    cout <<"enter  sideB : ";
    cin>>sideB;
    cout <<"enter  sideC : ";
    cin>>sideC;
    const float pi =3.14,
    p = (sideA + sideB + sideC)/2,
    part = (sideA * sideB * sideC)/(4 *(sqrt(p*(p-sideA)*(p-sideB)*(p-sideC))));

    int area = round(pi * pow(part,2) );
    cout <<"circle area is : "<< area <<endl;
    return 0;
}