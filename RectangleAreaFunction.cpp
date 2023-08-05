#include<iostream>
using namespace std;

float RectanguleAreaFunction(float length, float width){
    return length * width;
}
int main(){
    float length ,width;
    cout <<"enter length : ";
    cin>>length;
    cout<<"enter width : ";
    cin>>width;
    float area = RectanguleAreaFunction(length,width);
    cout<< "rectangular area is : "<<area<<endl;
    return 0;
}