//WAP to Create voting eligibility system
#include <iostream>
using namespace std;
int main()
{
    int age;
    char choice;
    while (true)
    {
        cout<<"\n********** Voting Eligibility System **********\n";
        cout<<"Enter your age: ";
        cin>>age;

        if (age<0)
        {
            cout<<"Invalid age entered!\n";
        }
        else if(age>=18)
        {
            cout<<"You are eligible to vote.\n";
        }
        else
        {
            cout<<"You are not eligible to vote.\n";
            cout<<"You can vote after " << 18 - age << " year(s).\n";
        }

        cout<<"\nDo you want to check another age? (Y/N): ";
        cin >> choice;

        if (choice=='N'||choice=='n')
        {
            cout << "Thank you for using the Voting Eligibility System!\n";
            break;
        }
    }

    return 0;
}
