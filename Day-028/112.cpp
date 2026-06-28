//WAP to Create contact management system
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Contact
{
    int id;
    string name;
    string phone;
    string email;
};
vector<Contact> contacts;
// Add Contact
void addContact()
{
    Contact c;
    cout<<"\nEnter Contact ID: ";
    cin>>c.id;
    for (auto &x : contacts)
    {
        if (x.id==c.id)
        {
            cout<<"Contact ID already exists!\n";
            return;
        }
    }

    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin, c.name);

    cout<<"Enter Phone Number: ";
    getline(cin, c.phone);

    cout<<"Enter Email: ";
    getline(cin, c.email);

    contacts.push_back(c);
    cout<<"Contact Added Successfully.\n";
}

// Display Contacts
void displayContacts()
{
    if (contacts.empty())
    {
        cout << "\nNo Contacts Available.\n";
        return;
    }

    cout << "\nID\tName\t\tPhone\t\tEmail\n";
    cout << "--------------------------------------------------------\n";

    for (auto &c : contacts)
    {
        cout<<c.id<<"\t"<<c.name<<"\t\t"<<c.phone<<"\t"<<c.email<<endl;
    }
}
// Search Contact
void searchContact()
{
    int id;
    cout<<"\nEnter Contact ID: ";
    cin>>id;
    for (auto &c : contacts)
    {
        if (c.id == id)
        {
            cout<<"\nContact Found\n";
            cout<<"ID    : " << c.id << endl;
            cout<<"Name  : " << c.name << endl;
            cout<<"Phone : " << c.phone << endl;
            cout<<"Email : " << c.email << endl;
            return;
        }
    }
    cout<<"Contact Not Found.\n";
}
// Update Contact
void updateContact()
{
    int id;
    cout<<"\nEnter Contact ID: ";
    cin>>id;

    for(auto &c : contacts)
    {
        if (c.id == id)
        {
            cin.ignore();
            cout<<"Enter New Name: ";
            getline(cin, c.name);
            cout<<"Enter New Phone: ";
            getline(cin, c.phone);
            cout<<"Enter New Email: ";
            getline(cin, c.email);
            cout<<"Contact Updated Successfully.\n";
            return;
        }
    }

    cout<<"Contact Not Found.\n";
}

// Delete Contact
void deleteContact()
{
    int id;
    cout<<"\nEnter Contact ID: ";
    cin>>id;

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].id == id)
        {
            contacts.erase(contacts.begin() + i);
            cout<<"Contact Deleted Successfully.\n";
            return;
        }
    }
    cout << "Contact Not Found.\n";
}
int main()
{
    int choice;

    do
    {
        cout << "\n====== Contact Management System ======\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            displayContacts();
            break;
        case 3:
            searchContact();
            break;
        case 4:
            updateContact();
            break;
        case 5:
            deleteContact();
            break;
        case 6:
            cout<<"Thank You!\n";
            break;
        default:
            cout<<"Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}