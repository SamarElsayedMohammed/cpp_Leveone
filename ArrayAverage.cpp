#include <iostream>
using namespace std;

int main(){

    float  Grades[3];
    cout <<"Enter First Grade : ";
    cin>>Grades[0];
    cout <<"Enter Second Grade : ";
    cin>>Grades[1];
    cout <<"Enter Third Grade : ";
    cin>>Grades[2];
    float avg = (Grades[0] + Grades[1] + Grades[2] )/3;
    cout <<"The average is : "<< avg <<endl;

    return 0;
}