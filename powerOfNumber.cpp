#include<iostream>
#include<cmath>

using namespace std;

float NumberPower(float num ,int power){

    float result;
    result = pow(num , power);
    return result;

}
int main(){
    float num;
    int power;
    cout << "enter number : " <<endl;
    cin>>num;
    cout << "enter power : " <<endl;
    cin>>power;
    cout <<"power of  "<<num<<" ^ "<< power<<" : "<<NumberPower(num ,power)<<endl;
    return 0;
}