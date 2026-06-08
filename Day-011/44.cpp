//WAP to write function to find factorial
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;//to store factorial
    for(int i=2;i<=n;i++)
    {
       fact*=i;
    }
    return fact;
}

int main()
{
   int num;
   cout<<"Enter a number:";
   cin>>num;
   cout<<"factorial of "<<num<<"="<<factorial(num);
}