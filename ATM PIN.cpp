#include<iostream>
using namespace std;

void ReadPassword(string &password){
    cout <<"enter your password : ";
    cin>>password;
}
string CheckPassword(string password){
    if (password == "12345"){
        return "your balance is : 7500";
    }else{
        return "invalid password";
    }
}

int main(){

    string password;
    ReadPassword(password);
    cout << "you enter passord : "<<password<<" "<<CheckPassword(password)<<endl;
    return 0;
}