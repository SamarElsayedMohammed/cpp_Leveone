#include<iostream>
#include <cmath>
using namespace std;

float CircleArea(float redius){

    const float pi = 3.14;
    return pi * pow(redius,2);

}
int main(){
    float redius;
    cout <<"enter circle redius : ";
    cin>>redius;
    cout <<"circle area is : "<< CircleArea(redius)<<endl;
    return 0;
}