#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float reduis ;
    cout <<"enter circle reduis : ";
    cin>>reduis;
    const float pi =3.14;
    float area = ceil(pi * pow(reduis,2));
    cout <<"circle area is : "<< area <<endl;
    return 0;
}