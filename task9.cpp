#include<iostream>
using namespace std;

int main(){
    cout << "enter number please "<<endl;
    float num;
    cin >>num ;

    float a,b,c;
    a = num *num;
    b = a*num;
    c = b*num;
    cout << a <<" "<< b <<" "<< c <<endl;
    return 0;
}
