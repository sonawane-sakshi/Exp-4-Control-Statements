//sakshi Sonawane
//PRN:24070123505
#include<iostream>
using namespace std;
int main(){
    char op;
    float num1, num2;
    cout<<"Enter the operator: +, -, *, /:";
    cin>>op;

    cout << "Enter two Operands:";
    cin>>num1>>num2;
    switch(op){
        case '+':
        cout << num1<<"+"<< num2<<"="<<num1+num2;
        break;

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;

        case '*':
        cout<<num1<<'*'<<num2<<'='<<num1*num2;
        break;

        case '/':
        cout<<num1<<'/'<<num2<<num1/num2;
        break;

        default:
        cout<<"Error!";
        break;

    }
    return 0;
}
/*
**Output**
Enter the operator: +, -, *, /:/
Enter two Operands:3
6
3/60.5

Enter the operator: +, -, *, /:*
Enter two Operands:30
20
30*20=600

Enter the operator: +, -, *, /:-
Enter two Operands:78
90
78-90=-12
*/
    
