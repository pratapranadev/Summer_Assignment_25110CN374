//WAP to Create ticket booking system
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Ticket
{
    int ticketNo, seatNo;
    string name, destination;
};
vector<Ticket> tickets;
void bookTicket()
{
    Ticket t;
    cout<<"\nEnter Ticket No: ";
    cin>>t.ticketNo;
    cin.ignore();
    cout<<"Enter Passenger Name: ";
    getline(cin, t.name);
    cout << "Enter Destination: ";
    getline(cin, t.destination);
    cout<<"Enter Seat No: ";
    cin>>t.seatNo;
    tickets.push_back(t);
    cout<<"Ticket Booked Successfully!\n";
}
void displayTickets()
{
    if (tickets.empty())
    {
        cout<<"\nNo Tickets Booked.\n";
        return;
    }
    cout << "\nTicket\tName\t\tDestination\tSeat\n";
    for (auto &t : tickets)
        cout<<t.ticketNo<<"\t"<<t.name<<"\t\t"<<t.destination<<"\t\t"<< t.seatNo<<endl;
}
void searchTicket()
{
    int no;
    cout<<"\nEnter Ticket No: ";
    cin>>no;
    for (auto &t : tickets)
        if (t.ticketNo==no)
        {
            cout << "\nName: " << t.name
                 << "\nDestination: " << t.destination
                 << "\nSeat No: " << t.seatNo << endl;
            return;
        }
    cout << "Ticket Not Found.\n";
}
int main()
{
    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bookTicket();
            break;
        case 2:
            displayTickets();
            break;
        case 3:
            searchTicket();
            break;
        case 4:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}