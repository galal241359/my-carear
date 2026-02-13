#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    cout << "enter two numbers ";
    cin >> number1 >> number2;

    if (number1 > number2)
        cout << "first number is greater";
    else if (number2 > number1)
        cout << "second number is greater";
    else
        cout << "numbers are equal";

    return 0; 
}