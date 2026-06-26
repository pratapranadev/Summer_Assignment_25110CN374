// WAP to Create ATM simulation
#include <iostream>
using namespace std;
int main() {
    int pin = 1227;
    int entered_Pin;
    double balance = 20000.0;
    int choice;
    double amount;

    cout << "====== ATM Simulation ======\n";

    // PIN Verification
    cout << "Enter your 4-digit PIN:";
    cin >> entered_Pin;

    if (entered_Pin != pin) {
        cout << "Incorrect PIN! Access Denied.\n";
        return 0;
    }

    do {
        cout<<"\n===== ATM MENU =====\n";
        cout<<"1. Check Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Current Balance: Rs. " << balance << endl;
            break;

        case 2:
            cout<<"Enter amount to deposit: ";
            cin>> amount;

            if (amount>0) {
                balance += amount;
                cout<<"Deposit Successful.\n";
                cout<<"Updated Balance: Rs. " << balance << endl;
            } else {
                cout<<"Invalid Amount!\n";
            }
            break;

        case 3:
            cout<<"Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= 0) {
                cout<<"Invalid Amount!\n";
            }
            else if (amount > balance) {
                cout<<"Insufficient Balance!\n";
            }
            else {
                balance -= amount;
                cout<<"Please collect your cash.\n";
                cout<<"Remaining Balance: Rs. " << balance << endl;
            }
            break;

        case 4:
            cout<<"Thank you for using the ATM!\n";
            break;

        default:
            cout<<"Invalid Choice!\n";
        }

    } while (choice!=4);

    return 0;
}