#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n===== Employee Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].id;
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Department: ";
            getline(cin, emp[n].department);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "\nEmployee Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo Employee Records Found!\n";
            }
            else
            {
                cout << "\nEmployee Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "\nEmployee ID : " << emp[i].id;
                    cout << "\nName        : " << emp[i].name;
                    cout << "\nDepartment  : " << emp[i].department;
                    cout << "\nSalary      : " << emp[i].salary << endl;
                }
            }
            break;

        case 3:
            found = false;
            cout << "\nEnter Employee ID to Search: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "\nEmployee Found:";
                    cout << "\nEmployee ID : " << emp[i].id;
                    cout << "\nName        : " << emp[i].name;
                    cout << "\nDepartment  : " << emp[i].department;
                    cout << "\nSalary      : " << emp[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Record Not Found!\n";
            break;

        case 4:
            found = false;
            cout << "\nEnter Employee ID to Update: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, emp[i].name);

                    cout << "Enter New Department: ";
                    getline(cin, emp[i].department);

                    cout << "Enter New Salary: ";
                    cin >> emp[i].salary;

                    cout << "\nEmployee Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Record Not Found!\n";
            break;

        case 5:
            found = false;
            cout << "\nEnter Employee ID to Delete: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;
                    cout << "\nEmployee Record Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Record Not Found!\n";
            break;

        case 6:
            cout << "\nExiting Employee Management System...\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}