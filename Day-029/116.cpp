//WAP to Create inventory management system

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Item
{
private:
    int id;
    string name;
    int quantity;
    double price;
public:
    void setData(int i, string n, int q, double p)
    {
        id = i;
        name = n;
        quantity = q;
        price = p;
    }
    int getId() { return id; }
    string getName() { return name; }
    int getQuantity() { return quantity; }
    double getPrice() { return price; }
    void updateQuantity(int q)
    {
        quantity = q;
    }
    void display()
    {
        cout<< "\nID: " << id;
        cout<< "\nName: " << name;
        cout<< "\nQuantity: " << quantity;
        cout<< "\nPrice: " << price << endl;
    }
};

vector<Item> inventory;
void addItem()
{
    int id, qty;
    string name;
    double price;

    cout<< "Enter Item ID: ";
    cin>> id;
    cin.ignore();

    cout<< "Enter Item Name: ";
    getline(cin, name);

    cout<< "Enter Quantity: ";
    cin>> qty;

    cout<< "Enter Price: ";
    cin>> price;

    Item item;
    item.setData(id, name, qty, price);
    inventory.push_back(item);

    cout << "Item Added Successfully.\n";
}

void displayItems()
{
    if (inventory.empty())
    {
        cout<< "Inventory is Empty.\n";
        return;
    }

    for (auto &item : inventory)
    {
        item.display();
        cout<< "--------------------\n";
    }
}

void searchItem()
{
    int id;
    cout<< "Enter Item ID: ";
    cin>> id;

    for (auto &item : inventory)
    {
        if (item.getId() == id)
        {
            item.display();
            return;
        }
    }

    cout<< "Item Not Found.\n";
}

void updateItem()
{
    int id, qty;

    cout<< "Enter Item ID: ";
    cin>> id;

    for (auto &item : inventory)
    {
        if (item.getId() == id)
        {
            cout<< "Enter New Quantity: ";
            cin>> qty;
            item.updateQuantity(qty);
            cout<< "Quantity Updated Successfully.\n";
            return;
        }
    }

    cout<< "Item Not Found.\n";
}

void deleteItem()
{
    int id;
    cout<< "Enter Item ID: ";
    cin>> id;

    for (int i = 0; i < inventory.size(); i++)
    {
        if (inventory[i].getId() == id)
        {
            inventory.erase(inventory.begin() + i);
            cout<< "Item Deleted Successfully.\n";
            return;
        }
    }

    cout << "Item Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<< "\n====== INVENTORY MANAGEMENT ======\n";
        cout<< "1. Add Item\n";
        cout<< "2. Display Items\n";
        cout<< "3. Search Item\n";
        cout<< "4. Update Quantity\n";
        cout<< "5. Delete Item\n";
        cout<< "6. Total Items\n";
        cout<< "0. Exit\n";
        cout<< "Enter Choice: ";
        cin>> choice;

        switch (choice)
        {
        case 1:
            addItem();
            break;

        case 2:
            displayItems();
            break;

        case 3:
            searchItem();
            break;

        case 4:
            updateItem();
            break;

        case 5:
            deleteItem();
            break;

        case 6:
            cout<< "Total Items: " << inventory.size() << endl;
            break;

        case 0:
            cout<< "Exiting Program...\n";
            break;

        default:
            cout<< "Invalid Choice!\n";
        }

    } while(choice!=0);

    return 0;
}