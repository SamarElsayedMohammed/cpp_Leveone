#include<iostream>
using namespace std;

int main(){
float a,b;
cout<< "enter first number"<<endl;
cin>>a;
cout<< "enter second number"<<endl;
cin>>b;
cout <<a<<" = "<< b<<" => "<<(a==b)<<endl;
cout <<a<<" != "<< b<<" => "<<(a!=b)<<endl;
cout <<a<<" > "<< b<<" => "<<(a>b)<<endl;
cout <<a<<" < "<< b<<" => "<<(a<b)<<endl;
cout <<a<<" >= "<< b<<" => "<<(a>=b)<<endl;
cout <<a<<" <= "<< b<<" => "<<(a<=b)<<endl;

    return 0;
}