//WAP to write function for palindrome
#include <iostream>
using namespace std;
bool palindrome(int n)
{
     int temp=n;
     int rev=0;//to store reverse of a number
     while(temp>0)
     {
        int digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
     }
     if(n==rev)
     return true;
     else
     return false;
}
int main()
{
   int num;
   cout<<"Enter the number:";
   cin>>num;
   if(palindrome(num))
   {
          cout<<num<<" is a palindrome number";
   }
   else
   {
    cout<<num<<" is not a palindrome number";
   }
}
