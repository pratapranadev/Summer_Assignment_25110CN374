//Write a program to Recursive factorial
#include <iostream>
using namespace std;
int factorial(int n)
{
   if(n==1||n==0)
   {
    return 1;
   }
   return n*factorial(n-1);
}
int main()
{
    int N;
    cout<<"Enter the number:";
    cin>>N;
    if(N>=0){
    int fact=factorial(N);//fact to store factorial
    cout<<"Factorial of "<<N<<"="<<fact;
}
    else
    cout<<"factorial of negative number does not exist";
}