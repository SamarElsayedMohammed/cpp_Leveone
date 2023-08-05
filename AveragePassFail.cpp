#include <iostream>
using namespace std;
struct Marks
{
    int mark1 ,mark2,mark3;
};

void ReadMarks(Marks &marks){
    cout<<"enter mark 1 :";
    cin>>marks.mark1;
    cout<<"enter mark 2 :";
    cin>>marks.mark2;
    cout<<"enter mark 3 :";
    cin>>marks.mark3;
}

float MarksAverage(Marks marks){

    return (marks.mark1 +marks.mark2 +marks.mark3)/3;
}
string CheckPassOrFail(Marks marks){
    float result = MarksAverage(marks);
    if (result >= 50){
        return "pass";
    
    }else{
        return "fail";
    }
}
int main(){
    Marks marks;
    ReadMarks(marks);
    float average = MarksAverage(marks);
    cout << "your average is : "<<average <<" and your are : "<<CheckPassOrFail(marks)<<endl;

    return 0;
}