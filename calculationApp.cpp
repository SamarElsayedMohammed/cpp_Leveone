#include <iostream>
using namespace std;
int main(){
    
    cout <<"---------------------------------------\n";
    cout <<"----------Calculate Your Age-----------\n";
    cout <<"---------------------------------------\n";
    cout<<"Enter your age please\n";
    int age;
    cin>>age;
    int ageInDays = age*365;
    int ageInHours = ageInDays*24;
    int ageInMinuts = ageInHours*60;
    int ageInSeconds = ageInMinuts*60;
    cout <<"Your Age deatils is :\n\n Days\t Housr\t Munits\t Secounds\n\n"<< ageInDays<<" "<< ageInHours<<" "<<ageInMinuts<<" "<<ageInSeconds<<endl;
    return 0;
}