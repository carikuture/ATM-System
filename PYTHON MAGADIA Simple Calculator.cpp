// PYTHON MAGADIA Simple Calculator
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //variables
    double num1;
    double num2;
    char ope;

    //questions
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /, %): ";
    cin >> ope;
    cout << "Enter another number: ";
    cin >> num2;


    //solutions
    switch (ope)
    {
    case '+':
        cout << endl << num1 << "+" << num2 << " = " << (num1 + num2) << endl;
        break;
    case '-':
        cout << endl << num1 << "-" << num2 << " = " << (num1 - num2) << endl;
        break;
    case '*':
        cout << endl << num1 << "*" << num2 << " = " << (num1 * num2) << endl;
        break;
    case '/':
        cout << endl << num1 << "/" << num2 << " = " << (num1 / num2) << endl;
        break;
    case '%':
        cout << endl << num1 << "%" << num2 << " = " << fmodf(num1, num2) << endl;
        break;
    default:
        cout << endl << "Entered wrong input." << endl;
        break;
    }

    return 0;
}
