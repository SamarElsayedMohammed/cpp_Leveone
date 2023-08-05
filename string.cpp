#include <iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2,str3;
    cout<< "Please Enter String2 : ";
    cin>>str2;
    cout<< "Please Enter String1 : ";
    cin.ignore(1,'\n');
    getline(cin,str1);
    
    cout<< "Please Enter String3 : ";
    cin>>str3;
    cout <<"******************************\n";
    cout<<"the lenght of string is  "<<str1.length()<<endl;
    cout << "character at 0,2,4,7 are : "<<str1[0]<< " "<<str1[2]<< " "<<str1[4]<< " "<<str1[7]<<endl;
    cout <<"the concatination of string one and strin two is : " << str2 + str3 <<endl;
    cout << str2 <<" * "<<str3 <<" = "<< stoi(str2)*stoi(str3)<<endl;
    return 0;
}