#include<iostream>
#include <cmath>

using namespace std;

float CircleArea(float diameter){
    float const pi = 3.14;
    return (pi * pow(diameter,2))/4;
}
int main(){
    
    float diameter;
    cout << "Enter circle diameter : ";
    cin>>diameter;
    cout <<"circle area is  : "<<CircleArea(diameter)<<endl;

    return 0;
}