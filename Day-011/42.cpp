//WAP to write a function to find maximum
#include <iostream>
using namespace std;

int maximum(int &num1,int &num2)
{
     if(num1>num2)
     return num1;
     else
     return num2;
}

int main()
{
    int num1,num2;
    cout<<"Enter two numbers:\n";
    cout<<"num1:";
    cin>>num1;
    cout<<"num2:";
    cin>>num2;

    cout<<"Maximum value ="<<maximum(num1,num2);

}