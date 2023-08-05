#include <iostream>
#include<string>
using namespace std;

int main(){
    string st1="43.22";
    int n1=20,n4;
    double n2 =33.5,n3=55.23;
    n4 = n2;
    cout<< stoi(st1) <<endl;
    cout<< stod(st1) <<endl;
    cout<< stof(st1) <<endl;
    cout<<  to_string(n1) <<endl;
    cout<< to_string(n2) <<endl;
    cout<< to_string(n3) <<endl;
    cout<< int(n2) <<endl;
    cout<< (int)n2 <<endl;
    cout<< n4 <<endl;
    return 0;
}