#include <iostream>
using namespace std;
 
int main(){
    
    cout <<"---------------------------------------\n";
    cout <<"----------Calculate kilo byte-----------\n";
    cout <<"---------------------------------------\n";
    cout<<"Enter kilo bytes please\n";
    int kiloByte;
    cin>>kiloByte;
    int inBytes=kiloByte*1024;
    int inBits=inBytes*1024;
    cout<<"\nKilo Bytes : "<<kiloByte<<"\n\n";
    cout<<"Bytes : "<< inBytes <<"\n\n";
    cout<<"Bits : "<< inBits <<"\n\n";
    cout <<"---------------------------------------\n";
    return 0;
}