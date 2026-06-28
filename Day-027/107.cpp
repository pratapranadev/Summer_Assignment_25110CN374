//WAP to Create salary management system
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};

vector<Employee> employees;

// Add Employee
void addEmployee()
{
    Employee e;

    cout << "\nEnter Employee ID: ";
    cin >> e.id;

    // Check duplicate ID
    for (auto &emp : employees)
    {
        if (emp.id == e.id)
        {
            cout << "Employee ID already exists!\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e.name);

    cout << "Enter Basic Salary: ";
    cin >> e.basicSalary;

    cout << "Enter Allowance: ";
    cin >> e.allowance;

    cout << "Enter Deduction: ";
    cin >> e.deduction;

    e.netSalary = e.basicSalary + e.allowance - e.deduction;

    employees.push_back(e);

    cout << "Salary record added successfully.\n";
}

// Display Records
void displayEmployees()
{
    if (employees.empty())
    {
        cout << "\nNo salary records found.\n";
        return;
    }

    cout << "\n--------------------------------------------------------------------------\n";
    cout << "ID\tName\t\tBasic\tAllow.\tDeduct.\tNet Salary\n";
    cout << "--------------------------------------------------------------------------\n";

    for (auto &e : employees)
    {
        cout << e.id << "\t"
             << e.name << "\t\t"
             << e.basicSalary << "\t"
             << e.allowance << "\t"
             << e.deduction << "\t"
             << e.netSalary << endl;
    }
}

// Search Record
void searchEmployee()
{
    int id;
    cout << "\nEnter Employee ID: ";
    cin >> id;

    for (auto &e : employees)
    {
        if (e.id == id)
        {
            cout << "\nEmployee Found\n";
            cout << "ID          : " << e.id << endl;
            cout << "Name        : " << e.name << endl;
            cout << "Basic Salary: " << e.basicSalary << endl;
            cout << "Allowance   : " << e.allowance << endl;
            cout << "Deduction   : " << e.deduction << endl;
            cout << "Net Salary  : " << e.netSalary << endl;
            return;
        }
    }

    cout << "Employee not found.\n";
}

// Update Record
void updateEmployee()
{
    int id;
    cout << "\nEnter Employee ID to Update: ";
    cin >> id;

    for (auto &e : employees)
    {
        if (e.id == id)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, e.name);

            cout << "Enter New Basic Salary: ";
            cin >> e.basicSalary;

            cout << "Enter New Allowance: ";
            cin >> e.allowance;

            cout << "Enter New Deduction: ";
            cin >> e.deduction;

            e.netSalary = e.basicSalary + e.allowance - e.deduction;

            cout << "Salary record updated successfully.\n";
            return;
        }
    }

    cout << "Employee not found.\n";
}

// Delete Record
void deleteEmployee()
{
    int id;
    cout << "\nEnter Employee ID to Delete: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].id == id)
        {
            employees.erase(employees.begin() + i);
            cout << "Salary record deleted successfully.\n";
            return;
        }
    }

    cout << "Employee not found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== Salary Management System ==========\n";
        cout << "1. Add Salary Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary Record\n";
        cout << "5. Delete Salary Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            displayEmployees();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            updateEmployee();
            break;

        case 5:
            deleteEmployee();
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