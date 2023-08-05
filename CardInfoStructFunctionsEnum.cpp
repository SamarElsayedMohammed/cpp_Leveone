#include<iostream>
#include <string>
using namespace std;
enum Gender  { Male ='M',Female ='F' };
enum Status {single,married};
enum Favaroit {red ='R',green='G',blue='B'};

struct StrCardInfo
{
    string name ,city,country;
    short int age;
    char gender;
    bool isMarried ;
    string favoriteColor;

};

void ReadInfoData(StrCardInfo &infoCard){
    cout <<"enter your full name : ";
    getline(cin,infoCard.name);
    cout<< "enter your age : ";
    cin>>infoCard.age;
    cout<< "enter your city : ";
    cin>>infoCard.city;
    cout<< "enter your country : ";
    cin>>infoCard.country;
    infoCard.gender =Gender::Female ;
    infoCard.isMarried = Status::married;
    infoCard.favoriteColor = Favaroit::green;
}
void PrintInfoData(StrCardInfo infoCard){

    cout<< "****************************************\n";
    cout<<"Name: \'"<<infoCard.name<< "\""<<endl;
    cout<<"Age: "<<infoCard.age<<endl;;
    cout << "City: "<<infoCard.city<< endl;
    cout << "Country: "<<infoCard.country<<endl;
    cout << "Gender: "<< infoCard.gender <<endl;
    cout << "isMarred: "<< infoCard.isMarried<<endl;
    cout << "favorite color : "<< infoCard.favoriteColor<<endl;
    cout<< "****************************************\n";

}

int main(){

    StrCardInfo person1;
    ReadInfoData(person1);
    PrintInfoData(person1);

    return 0;
}