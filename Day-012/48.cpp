//WAP to write a function for perfect number
#include<iostream>
using namespace std;
bool perfectnumber(int n)
{
      int sum=0;
      for(int i=1;i<n;i++)
      {
        if(n%i==0)
        {
            sum+=i;
        }
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
    if(perfectnumber(num))
    {
        cout<<num<<" is a perfect number";
    }
    else
    {
        cout<<num<<" is not a perfect number";
    }

}