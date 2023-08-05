#include<iostream>
using namespace std;

int main(){
    float totalCash,cashPaid,remenderCash;
    cout <<"enter tatal cash please "<<endl;
    cin>>totalCash;
    cout <<"enter tatal cash paid please "<<endl;
    cin>>cashPaid;
    remenderCash = totalCash -cashPaid;
    cout <<"the reminder cash is : "<<remenderCash<<endl;
    return 0;
}