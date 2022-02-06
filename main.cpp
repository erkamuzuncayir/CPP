#include <iostream>

enum OperationCodes
{
    SumOp = 1,
    SubstractOp = 2,
    MultiplyOp = 3,
    DivideOp = 4,
    ExitOp = 5,
};

//  declaration of functions
int sum();
int substract();
int multiply();
int divide();
void display_operations();

int main()

{
    int choice = 0;

    while (choice != ExitOp)
    {
        cout << "Please select the desired operation : ";
        display_operations();
        cin >> choice;

        switch (choice)
        {
        case SumOp:
            sum();
            break;
        case SubstractOp;
            substract() break;
            case MultiplyOp;
            multiply() break;
            case DivideOp;
            divide() break;
            default:
            cout << "Please select appropiate values. Try again!" << endl;
            break;
        }
    }
}

void display_operations();
{
    cout << "Sum for 1" << endl;
    cout << "Substract for 2" << endl;
    cout << "Multiply for 3" << endl;
    cout << "Divide for 4" << endl;
    cout << "Exit for 5" << endl;
}

int sum()
{
    cout << "Please enter two integer numbers : ";
    int a, b;
    cin >> a;
    cin >> b;

    cout << "The sum of two variables : " << (a + b) << endl;

    return a + b;
}
int substract()
{
    cout << "Please enter two integer numbers : ";
    int a, b;
    cin >> a;
    cin >> b;

    cout << "The substract of two variables : " << (a - b) << endl;

    return a - b;
}
int multiply()
{
    cout << "Please enter two integer numbers : ";
    int a, b;
    cin >> a;
    cin >> b;

    cout << "The multiply of two variables : " << (a * b) << endl;

    return a * b;
}
int divide()
{
    cout << "Please enter two integer numbers : ";
    int a, b;
    cin >> a;
    cin >> b;

    cout << "The divide of two variables : " << (a / b) << endl;

    return a / b;
}