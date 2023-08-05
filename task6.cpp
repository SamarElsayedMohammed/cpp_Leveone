#include<iostream>
using namespace std;

int main(){
    float height,width;
    cout<<"calculate tarangular area application"<<endl;
    cout<<"enter rectangular height"<<endl;
    cin>>height;
    cout<< "enter rectanqular width :"<<endl;
    cin>>width;
    //calculating the rectangle's area using formula: A = h*w

    float area = height * width;
    cout <<"Area of ractangulare is : "<< area <<endl;
    
    return 0;
}