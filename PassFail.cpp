#include<iostream>
using namespace std;

void ReadMark(int &mark){
    cout <<"enter your mark : ";
    cin>>mark;
}
string CheckPassOrFail(int mark){
    if (mark >= 50){
        return "pass";
    }else{
        return "Fail";
    }
}
int main(){

    int mark;
    ReadMark(mark);
    cout <<"your mark is : "<<mark<<" your result is : "<<CheckPassOrFail(mark)<<endl;

    return 0;
}
