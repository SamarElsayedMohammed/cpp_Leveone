#include<iostream>
#include <cmath>
using namespace std;

float RectanguleAreaFunction(float length, float side){

    return length*(sqrt(pow(side,2)-pow(length,2))) ;
}
int main(){
    float length ,side;
    cout <<"enter length : ";
    cin>>length;
    cout<<"enter side : ";
    cin>>side;
    float area = RectanguleAreaFunction(length,side);
    cout<< "rectangular area is : "<<area<<endl;
    return 0;
}