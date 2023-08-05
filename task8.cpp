#include<iostream>
using namespace std;

int main(){
    float sideA,sideB;
    const float pi =3.14;
    cout<<"calculate circle area application"<<endl;
    cout<<"enter Square side A"<<endl;
    cin>>sideA;
    cout<<"enter Square side B"<<endl;
    cin>>sideB;
    float area = ((pi * sideB* sideB)/4)*(((2*sideA) - sideB )/((2*sideA) + sideB ));
    cout <<"Area of circle is : "<< area <<endl;
    
    return 0;
}