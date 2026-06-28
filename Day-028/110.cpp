//WAP to Create bank account system
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Account
{
    int accNo;
    string name;
    float balance;
};
vector<Account> accounts;
// Create Account
void createAccount()
{
    Account a;
    cout<<"\nEnter Account Number: ";
    cin>>a.accNo;
    for (auto &acc : accounts)
    {
        if(acc.accNo == a.accNo)
        {
            cout << "Account already exists!\n";
            return;
        }
    } 
    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, a.name);
    cout << "Enter Initial Balance: ";
    cin >> a.balance;
    accounts.push_back(a);
    cout << "Account created successfully.\n";
}
// Deposit Money
void deposit()
{
    int accNo;
    float amount;

    cout<<"\nEnter Account Number: ";
    cin>>accNo;
    for (auto &acc : accounts)
    {
        if (acc.accNo == accNo)
        {
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            acc.balance += amount;
            cout << "Amount deposited successfully.\n";
            return;
        }
    }
    cout<<"Account not found.\n";
}
// Withdraw Money
void withdraw()
{
    int accNo;
    float amount;
    cout << "\nEnter Account Number: ";
    cin >> accNo;
    for (auto &acc : accounts)
    {
        if (acc.accNo==accNo)
        {
            cout<<"Enter Withdraw Amount: ";
            cin>>amount;
            if (amount>acc.balance)
                cout<<"Insufficient balance.\n";
            else
            {
                acc.balance-=amount;
                cout<<"Withdrawal successful.\n";
            }
            return;
        }
    }
    cout<<"Account not found.\n";
}
// Check Balance
void checkBalance()
{
    int accNo;
    cout<<"\nEnter Account Number: ";
    cin>>accNo;
    for (auto &acc:accounts)
    {
        if (acc.accNo==accNo)
        {
            cout<<"Current Balance: "<<acc.balance<<endl;
            return;
        }
    }
    cout<<"Account not found.\n";
}
// Display Account
void displayAccount()
{   int accNo;
    cout<<"\nEnter Account Number: ";
    cin>>accNo;
    for (auto &acc:accounts)
    {
        if (acc.accNo==accNo)
        {
            cout<<"\nAccount Number : " << acc.accNo << endl;
            cout<<"Account Holder : " << acc.name << endl;
            cout<<"Balance        : " << acc.balance << endl;
            return;
        }
    }
    cout<<"Account not found.\n";
}
int main()
{
    int choice;
    do
    {
        cout << "\n========== Bank Account System ==========\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Display Account Details\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createAccount();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            checkBalance();
            break;
        case 5:
            displayAccount();
            break;
        case 6:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}