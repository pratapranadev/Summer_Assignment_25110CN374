// WAP to check strong number
#include <iostream>
using namespace std;
//fn to find factorial
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
      return n*factorial(n-1);
}
int main(){
    int N;
    cout<<"Enter the number:";
    cin>>N;
    int temp=N;
    int sum=0;
    while(temp>0)
    {
        int digit=temp%10;
        sum=sum+factorial(digit);
        temp/=10;
    }
    if(N==sum)
    {
        cout<<N<<" is a strong number";
    }
    else{
        cout<<N<<" is not a strong number";
    }

}