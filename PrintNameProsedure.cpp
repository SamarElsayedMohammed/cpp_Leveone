#include<iostream>
using namespace std;

void PrintNameProsedure(string name){
    cout<<"Your name is \""<< name  <<"\""<<endl;
}

int main(){
    string name;
    cout <<"enter your name : "<<endl;
    // cin.ignore(1,'\n');
    getline(cin,name);
    PrintNameProsedure(name);
    return 0;
}