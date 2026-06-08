//WAP to write function to check prime
#include <iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(prime(num))
        cout<<num<<" is a prime number";
     else
        cout<<num<<" is not a prime number";   

}