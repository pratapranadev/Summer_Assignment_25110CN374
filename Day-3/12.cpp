// WAP to find LCM of two numbers
#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int maxNum = (num1 > num2) ? num1 : num2;

    while (true)
    {
        if (maxNum % num1 == 0 && maxNum % num2 == 0)
        {
            cout << "LCM = " << maxNum;
            break;
        }

        maxNum++;
    }

    return 0;
}