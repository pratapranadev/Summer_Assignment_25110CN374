//WAP to write function for armstrong
#include <iostream>
#include <cmath>
using namespace std;
bool armstrong(int n)
{
     int temp=n;
     int count=0;
     while(temp>0)
     {
        count++;
        temp/=10;
     }
     temp=n;
     int sum=0;
     while(temp>0)
     {
        int digit=temp%10;
        sum=sum+round(pow(digit,count));
        temp/=10;
     }
     if(n==sum)
     return true;
     else
     return false;
}
int main()
{
    int num;
   cout<<"Enter the number:";
   cin>>num;
   if(armstrong(num))
   {
          cout<<num<<" is an armstrong number";
   }
   else
   {
    cout<<num<<" is not an armstrong number";
   }
}