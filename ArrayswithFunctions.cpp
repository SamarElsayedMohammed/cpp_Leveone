#include <iostream>
using namespace std;

void ReadGrades(float Grades[3]){
    cout <<"Enter First Grade : ";
    cin>>Grades[0];
    cout <<"Enter Second Grade : ";
    cin>>Grades[1];
    cout <<"Enter Third Grade : ";
    cin>>Grades[2];
}
float Average(float Grades[3]){
    float avg = (Grades[0] + Grades[1] + Grades[2] )/3;
    return avg;
}
int main(){

    float  Grades[3];
    ReadGrades(Grades);
    cout <<"The average is : "<< Average(Grades) <<endl;

    return 0;
}