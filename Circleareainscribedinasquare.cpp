#include<iostream>
#include <cmath>
using namespace std;

float CircleArea(float side){
    float const pi = 3.14;
    return (pi * pow(side,2))/4 ;

}
int main(){
        
    float side;
    cout << "Enter circle side : ";
    cin>>side;
    cout <<"circle area is  : "<<CircleArea(side)<<endl;

    return 0;
}