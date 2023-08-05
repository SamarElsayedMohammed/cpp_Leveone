#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float side ;
    cout <<"enter squar side : ";
    cin>>side;
    const float pi =3.14;
    int area = ceil((pi * pow(side,2))/4);
    cout <<"circle area is : "<< area <<endl;
    return 0;
}