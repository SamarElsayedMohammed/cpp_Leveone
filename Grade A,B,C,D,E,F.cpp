#include<iostream>
using namespace std;

void ReadGradeValue(int &grade){
    cout<<"Enter grade value : ";
    cin>>grade;
}
char GradeResult(int grade){
    if(grade <=100 && grade >=90){
        return 'A';
    }else if(grade <90 && grade >=80){
        return 'B';
    }else if(grade <80 && grade >=70){
        return 'c';
    }else if(grade <70 && grade >=60){
        return 'D';
    }else if(grade <60 && grade >=50){
        return 'e';
    }else {
        return 'F';
    }
}
int main(){
    int grade;
    ReadGradeValue(grade);
    cout <<"your result is : "<<GradeResult(grade)<<endl;
    return 0;
}