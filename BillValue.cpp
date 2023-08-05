#include<iostream>
using namespace std;

int main(){
    float billValue;
    cout <<"enter bill value please : "<<endl;
    cin>>billValue;
     float totalBillValue = billValue*1.1;
     totalBillValue = totalBillValue*1.16;
     cout <<"total bill value is : "<<totalBillValue<<endl;
    return 0;
}