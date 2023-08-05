#include<iostream>
using namespace std;

void ReadAge(short int &age){
    cout <<"enter your age : ";
    cin>>age;
}
string ValidateAge(short int age){
    if (age >=18 && age <= 45){
        return "Valid Age";
    }else {
        return "Invalid Age";
    }
}
int main(){
    
    short int age;
    ReadAge(age);
    cout <<"your age : "<<age<<" your age is : "<<ValidateAge(age)<<endl;
    return 0;
}