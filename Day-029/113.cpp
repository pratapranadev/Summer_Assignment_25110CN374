//WAP to Create menu-driven calculator
#include <iostream>
#include <cmath>
using namespace std;
double add(double a,double b)
{
    return a + b;
}
double subtract(double a,double b)
{
    return a - b;
}
double multiply(double a,double b)
{
    return a * b;
}
double divide(double a,double b)
{
    if (b==0)
    {
        cout << "Error! Division by zero is not possible.\n";
        return 0;
    }
    return a/b;
}
int main()
{
    int choice;
    double num1,num2;
    do
    {
        cout<<"\n========== CALCULATOR ==========\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Modulus\n";
        cout<<"6. Power\n";
        cout<<"7. Square Root\n";
        cout<<"0. Exit\n";
        cout<<"===============================\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
            cout<<"Result = "<<add(num1, num2)<<endl;
            break;

        case 2:
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
            cout<<"Result = "<<subtract(num1, num2)<<endl;
            break;

        case 3:
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
            cout<<"Result = "<<multiply(num1, num2)<<endl;
            break;

        case 4:
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
            cout<<"Result = "<<divide(num1,num2)<<endl;
            break;

        case 5:
        {
            int a,b;
            cout<<"Enter two integers: ";
            cin>>a>>b;

            if (b==0)
                cout<<"Division by zero is not allowed.\n";
            else
                cout<<"Result = "<<a % b<<endl;
            break;
        }

        case 6:
            cout<<"Enter base and exponent: ";
            cin>>num1>>num2;
            cout << "Result = " << pow(num1, num2) << endl;
            break;

        case 7:
            cout<<"Enter a number: ";
            cin>>num1;

            if (num1 < 0)
                cout<<"Square root of negative number is not possible.\n";
            else
                cout<<"Result = "<<sqrt(num1)<<endl;
            break;

        case 0:
            cout<<"Thank you for using Calculator.\n";
            break;

        default:
            cout<<"Invalid Choice! Try Again.\n";
        }

    } while (choice!=0);

    return 0;
}