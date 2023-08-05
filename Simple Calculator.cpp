#include<iostream>
using namespace std;
struct strSimpleCalculatorOperand
{
    int number1,
        number2;
    char operationType;
};
enum enOperations {sum='+',sub='-',multiply='*',divide = '/'};
void OperationMenus(){
    cout<<"*****************************\n";
    cout <<" + : sum\n";
    cout <<" - : sub\n";
    cout <<" * : multiply\n";
    cout <<" / : divide\n";
    cout<<"*****************************\n";
}
void ReadCalculatorData(strSimpleCalculatorOperand &calculator){
    char op;
    cout<<"enter first number : ";
    cin>>calculator.number1;
    cout<<"enter second number : ";
    cin>>calculator.number2;
    OperationMenus();
    cin>>op;
    calculator.operationType = (enOperations) op;
    
}
float CalculateValue(strSimpleCalculatorOperand calculator){
    if(calculator.operationType == enOperations::sum){
        return calculator.number1 + calculator.number2;
    }else if(calculator.operationType == enOperations::sub){
        return calculator.number1 - calculator.number2;
    }else if(calculator.operationType == enOperations::multiply){
        return calculator.number1 * calculator.number2;
    }else if(calculator.operationType == enOperations::divide){
        if (calculator.number2 == 0)
        {
            return -1;
        }else{
             return calculator.number1 / calculator.number2;
        }   
    }else{
        return 0;
    }
}
int main(){
    strSimpleCalculatorOperand calculator;
    
    ReadCalculatorData(calculator);

    cout <<"your operation : "<<calculator.number1<<" "<<calculator.operationType<<" "<<calculator.number2<<" is : "<<CalculateValue(calculator)<<endl;
    return 0;
}