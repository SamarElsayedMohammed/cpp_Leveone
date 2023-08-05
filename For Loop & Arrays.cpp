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

void ReadInfoData(StrCardInfo &persons){
    cout <<"enter your full name : ";
    cin.ignore(2,'\n');
    getline(cin,persons.name);
    cout<< "enter your age : ";
    cin>>persons.age;
    cout<< "enter your city : ";
    cin>>persons.city;
    cout<< "enter your country : ";
    cin>>persons.country;
    persons.gender =Gender::Female ;
    persons.isMarried = Status::married;
    persons.favoriteColor = Favaroit::green;
}
void PrintInfoData(StrCardInfo persons){

    cout<< "****************************************\n";
    cout<<"Name: \'"<<persons.name<< "\""<<endl;
    cout<<"Age: "<<persons.age<<endl;;
    cout << "City: "<<persons.city<< endl;
    cout << "Country: "<<persons.country<<endl;
    cout << "Gender: "<< persons.gender <<endl;
    cout << "isMarred: "<< persons.isMarried<<endl;
    cout << "favorite color : "<< persons.favoriteColor<<endl;
    cout<< "****************************************\n";

}
void ReadArrayElementData(StrCardInfo persons[100],short int &numberOfPerson)
{
    cout <<"enter number of persons : ";
    cin>>numberOfPerson;

    for (int i =0; i <= numberOfPerson - 1; i++){

        ReadInfoData(persons[i]);

    }
}
void PrintArrayInfoData(StrCardInfo persons[100],short int numberOfPerson){

    for (int i =0; i <= numberOfPerson - 1;i++){
        PrintInfoData(persons[i]);
    }
}

int main(){

    StrCardInfo persons[100];
    short int numberOfPerson;

    ReadArrayElementData(persons,numberOfPerson);
    PrintArrayInfoData(persons, numberOfPerson);

    return 0;
}