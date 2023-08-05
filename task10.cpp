#include<iostream>
using namespace std;

int main(){
    int Pennies, Nickels, Dimes, Quarters, Dollars;
    cout <<"enter Pennies please"<<endl;
    cin>>Pennies;
    cout <<"enter Nickels please"<<endl;
    cin>>Nickels;
    cout <<"enter Dimes please"<<endl;
    cin>>Dimes;
    cout <<"enter Pennies please"<<endl;
    cin>>Pennies;
    cout <<"enter Quarters please"<<endl;
    cin>>Quarters;
    cout <<"enter Dollars please"<<endl;
    cin>>Dollars;
    int totalPennies;
    float totalDollars;
    totalPennies = 1*Pennies + 5*Nickels + 10*Dimes + 25 * Quarters +100*Dollars;
    totalDollars = (totalPennies / 100);

    cout << "total Pennies is : "<<totalPennies<<endl;
    cout << "total Dollars is : "<<totalDollars<<endl;
    return 0;
}