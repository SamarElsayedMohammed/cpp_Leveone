#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float side ;
    cout <<"enter  side : ";
    cin>>side;
    const float pi =3.14;
    int area = floor(pow(side,2)/(4 *pi));
    cout <<"circle area is : "<< area <<endl;
    return 0;
}