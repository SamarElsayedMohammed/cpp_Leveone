#include<iostream>
using namespace std;

int main(){
    float dimeter;
    const float pi =3.142;
    cout<<"calculate circle area application"<<endl;
    cout<<"enter circle dimeter"<<endl;
    cin>>dimeter;

    //calculating the rectangle's area using formula: A = h*w

    float area = (dimeter * dimeter * pi)/4;
    cout <<"Area of circle is : "<< area <<endl;
    
    return 0;
}