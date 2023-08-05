#include<iostream>
#include <cmath>
using namespace std;

float CircleArea(float a ,float b ,float c){
    float const pi = 3.14 ;
    float p, part ,area;
    p = (a +b +c)/2;
    part = (a * b * c)/(4 * sqrt( p * (p-a) * (p-b) * (p-c)));
    area = pi * pow(part ,2);
    return area; 
}
int main(){
    float a ,b ,c;
    cout << "Enter tringle a : ";
    cin>>a;
    cout << "Enter tringle b : ";
    cin>>b;
    cout << "Enter tringle c : ";
    cin>>c;
    cout <<"circle area is  : "<<CircleArea(a ,b,c)<<endl;

    return 0;
}