#include<iostream>
#include <string>
using namespace std;
enum Gender  { Male,Female };
enum Status {single,married};
enum Favaroit {red=1,green=2,blue=3};
int main(){
  cout<< "****************************************\n";
    cout<<"Name: "<<"samar elsayed mohammed"<<endl;
    cout<<"Age: 29 years"<<endl;;
    cout << "City: Giza"<< endl;
    cout << "Country: Eygpt"<<endl;
    cout << "Gender: "<< Gender::Female <<endl;
    cout << "isMarred: "<< Status::married<<endl;
    cout << "favorite color : "<< Favaroit::red<<endl;
    cout<< "****************************************\n";
    cout << stoi("124.895")<<endl;
return 0;
}