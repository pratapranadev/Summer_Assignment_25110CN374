//Write a program to Recursive sum of digits
#include <iostream>
using namespace std;
int sumofdigits(int n)
{
    if(n==0)
    {
         return 0;
    }
    return (n%10)+sumofdigits(n/10);
}
int main()
{
    int N;
    cout<<"Enter the number:\n";
    cin>>N;
    cout<<"Sum of digits of "<<N<<" ="<<sumofdigits(N);
}