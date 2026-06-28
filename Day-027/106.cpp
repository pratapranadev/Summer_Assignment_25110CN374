//WAP to Create employee management system
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

vector<Employee> employees;

// Add Employee
void addEmployee()
{
    Employee e;

    cout<<"\nEnter Employee ID: ";
    cin>>e.id;

    // Check duplicate ID
    for(auto &emp : employees)
    {
        if(emp.id == e.id)
        {
            cout<<"Employee ID already exists!\n";
            return;
        }
    }
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, e.name);
    cout << "Enter Department: ";
    getline(cin, e.department);
    cout << "Enter Salary: ";
    cin >> e.salary;
    employees.push_back(e);
    cout << "Employee added successfully.\n";
}
// Display Employees
void displayEmployees()
{
    if (employees.empty())
    {
        cout << "\nNo employee records found.\n";
        return;
    }
    cout << "\n--------------------------------------------------------\n";
    cout << "ID\tName\t\tDepartment\tSalary\n";
    cout << "--------------------------------------------------------\n";

    for (auto &e : employees)
    {
        cout << e.id << "\t"
             << e.name << "\t\t"
             << e.department << "\t\t"
             << e.salary << endl;
    }
}

// Search Employee
void searchEmployee()
{
    int id;
    cout << "\nEnter Employee ID to Search: ";
    cin >> id;

    for (auto &e : employees)
    {
        if (e.id == id)
        {
            cout<<"\nEmployee Found\n";
            cout<<"ID         : " << e.id << endl;
            cout<<"Name       : " << e.name << endl;
            cout<<"Department : " << e.department << endl;
            cout<<"Salary     : " << e.salary << endl;
            return;
        }
    }

    cout<<"Employee not found.\n";
}

// Update Employee
void updateEmployee()
{
    int id;
    cout<<"\nEnter Employee ID to Update: ";
    cin>>id;

    for (auto &e : employees)
    {
        if (e.id==id)
        {
            cin.ignore();

            cout<<"Enter New Name: ";
            getline(cin, e.name);

            cout<<"Enter New Department: ";
            getline(cin, e.department);

            cout<<"Enter New Salary: ";
            cin>>e.salary;

            cout<<"Employee record updated successfully.\n";
            return;
        }
    }

    cout<<"Employee not found.\n";
}

// Delete Employee
void deleteEmployee()
{
    int id;
    cout<<"\nEnter Employee ID to Delete: ";
    cin>>id;

    for (int i=0;i<employees.size();i++)
    {
        if (employees[i].id == id)
        {
            employees.erase(employees.begin() + i);
            cout<<"Employee record deleted successfully.\n";
            return;
        }
    }

    cout<<"Employee not found.\n";
}
int main()
{
    int choice;

    do
    {
        cout << "\n========== Employee Management System ==========\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
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