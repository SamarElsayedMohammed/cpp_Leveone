#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float Dimeter ;
    cout <<"enter circle Dimeter : ";
    cin>>Dimeter;
    const float pi =3.14;
    int area = ceil((pi * pow(Dimeter,2))/4);
    cout <<"circle area is : "<< area <<endl;
    return 0;
}