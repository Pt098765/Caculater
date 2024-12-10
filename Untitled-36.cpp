//**********************************calculater**************************
#include <iostream>
using namespace std;

int main() {
    double number1, number2, total;
    char operation;
cout<<"***************************CALCULATER********************************"<<endl;
cout << "Enter the first number: ";
    cin >> number1;
cout << "Enter the second number: ";
    cin >> number2;
cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            total = number1 + number2;
            cout << "The total is: " << total << endl;
            break;
        case '-':
            total = number1 - number2;
            cout << "The total is: " << total << endl;
            break;
        case '*':
            total = number1 * number2;
            cout << "The total is: " << total << endl;
            break;
        case '/':
                total = number1 / number2;
                cout << "The result is: " << total << endl;
                break;
            } 
           

    return 0;
}
