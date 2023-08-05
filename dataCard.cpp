#include <iostream>
using namespace std;
int main(){
string name,country,city;
int age;
float salaryPerMonth;
char gender;
bool isMarredid;
    cout<<"Enter your name please "<<endl;
    cin>>name;
    cout<<"Enter your age please "<<endl;
    cin>>age;
    cout<<"Enter your country please"<<endl;
    cin>>country;
    cout<<"Enter your city please "<<endl;
    cin>>city;
    cout<<"Enter your gender please "<<endl;
    cin>>gender;
    cout<<" Is you marred "<<endl;
    cin>>isMarredid;
    cout<<"Enter your salary please"<<endl;
    cin>>salaryPerMonth;

    cout<< "****************************************\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<" years"<<endl;;
    cout << "City: "<<city<< endl;
    cout << "Country: "<<country<<endl;
    cout << "is marred: "<<isMarredid<<endl;
    cout << "Salary Per Month: "<<salaryPerMonth<<endl;
    cout << "Salary Per year: "<<salaryPerMonth * 12 <<endl;
    cout<< "****************************************\n";

    return 0;
}