#include <iostream>
#include<cmath>
using namespace std;
int main(){
    float num,power;
    cout <<"Enter number : "<<endl;
    cin>>num;
    cout <<"Enter power : "<<endl;
    cin>>power;
    cout << num <<" ^ " << power << " : "<< round(pow(num,power)) <<endl;
    return 0;

}