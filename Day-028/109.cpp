//WAP to Create library management system
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Book
{
    int id;
    string title;
    string author;
    bool issued = false;
};
vector<Book> library;
void addBook()
{
    Book b;
    cout << "\nEnter Book ID: ";
    cin >> b.id;
    cout << "Enter Book Title: ";
    getline(cin, b.title);
    cout << "Enter Author Name: ";
    getline(cin, b.author);
    library.push_back(b);
    cout << "Book added successfully.\n";
}
void displayBooks(){
    if (library.empty())
    {
         cout << "\nNo books available.\n";
        return;
    }
    cout << "\nID\tTitle\t\tAuthor\t\tStatus\n";
    for (auto &b : library)
    {
        cout << b.id << "\t"
             << b.title << "\t\t"
             << b.author << "\t\t"
             << (b.issued ? "Issued" : "Available") << endl;
    }
}
void searchBook()
{
    int id;
    cout << "\nEnter Book ID: ";
    cin >> id;

    for (auto &b : library)
    {
        if (b.id == id)
        {
            cout << "\nBook Found\n";
            cout << "Title : " << b.title << endl;
            cout << "Author: " << b.author << endl;
            cout << "Status: " << (b.issued ? "Issued" : "Available") << endl;
            return;
        }
    }
    cout << "Book not found.\n";
}
void issueBook()
{
    int id;
    cout << "\nEnter Book ID to Issue: ";
    cin >> id;
    for (auto &b : library)
    {
        if (b.id == id)
        {
            if (b.issued)
                cout << "Book already issued.\n";
            else
            {
                b.issued = true;
                cout << "Book issued successfully.\n";
            }
            return;
        }
    }
    cout<<"Book not found.\n";
}
void returnBook()
{
    int id;
    cout << "\nEnter Book ID to Return: ";
    cin >> id;
    for (auto &b : library)
    {
        if (b.id==id)
        {
            if (!b.issued)
                cout << "Book is already available.\n";
            else
            {
                b.issued = false;
                cout << "Book returned successfully.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}
int main()
{
    int choice;
    do
    {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            issueBook();
            break;
        case 5:
            returnBook();
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