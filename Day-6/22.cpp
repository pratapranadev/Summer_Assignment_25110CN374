//Write a program to Convert binary to decimal
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number(Binary):";
    cin>>N;
    int place=0;
    int temp=N;
    int decimal_num=0;
    while(temp>0)
    {
        int bit=temp%10;
        decimal_num+=bit*((int)pow(2,place));
        place++;
        temp/=10;

    }
    cout<<"Decimal representation of "<<N<<" = "<<decimal_num;
}