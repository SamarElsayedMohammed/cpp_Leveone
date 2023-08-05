#include<iostream>
using namespace std;
struct ReadHireadriverData
{
    short int age;
    bool  HasADiverLicense;

};
void ReadDriverData(ReadHireadriverData &driver){
    cout<<"Enter your age : ";
    cin>>driver.age;
    cout<<"Are You Has A Drive License : ";
    cin>>driver.HasADiverLicense;
}
string CheckHiring(ReadHireadriverData &driver){
    
    if (driver.age > 21 && driver.HasADiverLicense == 1){
        return "hired";
    }else{
        return "rejected";   
    }
}

int main(){
    ReadHireadriverData driver;
    ReadDriverData(driver);
    cout <<CheckHiring(driver)<<endl;
    return 0;
}