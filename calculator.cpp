#include<iostream>
#include <math.h>

int main(){

    char op;
    double num1, num2;
    double result ;
    std::cout <<"*************************** CALCULATOR ***************************"<< '\n';
    std::cout<< "Choose the operator(*,/,+,-)";   
    std ::cin>> op ;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (op){
        case '+':
        result= num1+ num2;
            std::cout<<" The result of this operation is:"<< result << '\n';
            break;
        case '-':
        result = num1 - num2;
            std::cout<<" The result of this operation is:"<< result << '\n';
            break;
        case '/':
        result = num1 / num2;
            std::cout<<" The result of this operation is:"<< result << '\n';
            break;
        case '*':
        result = num1 * num2;
            std::cout<<" The result of this operation is:"<< result << '\n';
            break;
        default:
           std::cout<<"That was not a valid response ";
           break;



    }
    
    std::cout <<"**********************************************************************";
    return 0;




}