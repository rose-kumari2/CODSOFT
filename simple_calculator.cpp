#include <iostream>
#include <cmath>
using namespace std;

int main (){
    cout << "Welcome to our calculator." << endl;
    float number1, number2;
    char operation;

    cout << "Enter the 1st number: " ;
    cin >> number1;
    cout << "Enter the operation perform ('+', '-', '*', '/') : " ;
    cin >> operation;
    cout << "Enter the 2nd number: " ;
    cin >> number2;

    if(operation == '+'){
        float Sum = number1 + number2;
        cout << "Sum = " << number1 << " + " << number2 << " = " << Sum << endl; 
    }
    else if(operation == '-'){
        float difference = number1 - number2;
        cout << "Difference = " << number1 << " - " << number2 << " = " << difference << endl; 
    }
    else if(operation == '*'){
        float product = number1 * number2;
        cout << "Product = " << number1 << " * " << number2 << " = " << product << endl; 
    }
    else if(operation == '/'){
        if(number2 == 0){
            cout << "Number is divided by zero:";
        }
        else {
            float division = number1 / number2;
            cout << "Division = " << number1 << " / " << number2 << " = " << division << endl; 
        }
    }
    else {
        cout << "No operation can be detected. ";
    }
    
}