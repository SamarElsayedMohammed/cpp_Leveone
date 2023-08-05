#include <iostream>
using namespace std;
struct stCountry
{
    string country;
    string city;
};
struct stSalary{
    float salary;
};
struct stAddress
{
  string address;
  string blockNumber;  
};

struct stMainInfo{
    string fullName;
    short int age;
    stSalary salary;
    stAddress address;
    stCountry country; 
};

int main(){
    stMainInfo client1;
    client1.fullName ="samar elsayed";
    client1.age = 29;
    client1.salary.salary =8000;
    client1.address.address= "s nour eleslam";
    client1.address.blockNumber =3;
    client1.country.city="giza";
    client1.country.country="eygpt";

    cout <<"******************************\n";
    cout<<"name : "<<client1.fullName<<endl;
    cout<<"age : "<<client1.age<<endl;
    cout<<"salary per month : "<<client1.salary.salary<<endl;
    cout<<"salary per year : "<<client1.salary.salary * 12 <<endl;
    cout<<"address  : "<<client1.address.address<<endl;
    cout<<"block of address  : "<<client1.address.blockNumber<<endl;
    cout<<"city  : "<<client1.country.city<<endl;
    cout<<"country  : "<<client1.country.country<<endl;
    cout <<"******************************\n";

    return 0;


}