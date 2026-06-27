#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    float basicSalary, hra, da, grossSalary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n===== Salary Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Salary Records";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Salary";
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

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basicSalary;

            // Calculate HRA, DA, and Gross Salary
            emp[n].hra = emp[n].basicSalary * 0.20;
            emp[n].da = emp[n].basicSalary * 0.10;
            emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

            n++;
            cout << "\nSalary Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo Records Found!\n";
            }
            else
            {
                cout << "\nEmployee Salary Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "\nEmployee ID   : " << emp[i].id;
                    cout << "\nName          : " << emp[i].name;
                    cout << "\nBasic Salary  : " << emp[i].basicSalary;
                    cout << "\nHRA (20%)     : " << emp[i].hra;
                    cout << "\nDA (10%)      : " << emp[i].da;
                    cout << "\nGross Salary  : " << emp[i].grossSalary << endl;
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
                    cout << "\nID            : " << emp[i].id;
                    cout << "\nName          : " << emp[i].name;
                    cout << "\nBasic Salary  : " << emp[i].basicSalary;
                    cout << "\nGross Salary  : " << emp[i].grossSalary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Record Not Found!\n";
            break;

        case 4:
            found = false;
            cout << "\nEnter Employee ID to Update Salary: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "Enter New Basic Salary: ";
                    cin >> emp[i].basicSalary;

                    emp[i].hra = emp[i].basicSalary * 0.20;
                    emp[i].da = emp[i].basicSalary * 0.10;
                    emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;

                    cout << "\nSalary Updated Successfully!\n";
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
            cout << "\nExiting Salary Management System...\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}