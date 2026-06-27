#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, roll, i;
    bool found;

    do
    {
        cout << "\n===== Student Record Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[n].roll;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, s[n].name);

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Records Found!\n";
            }
            else
            {
                cout << "\nStudent Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "\nRoll Number: " << s[i].roll;
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << endl;
                }
            }
            break;

        case 3:
            found = false;
            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "\nRecord Found:";
                    cout << "\nRoll Number: " << s[i].roll;
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Record Not Found!\n";
            break;

        case 4:
            found = false;
            cout << "Enter Roll Number to Update: ";
            cin >> roll;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cin.ignore();
                    cout << "Enter New Name: ";
                    getline(cin, s[i].name);

                    cout << "Enter New Marks: ";
                    cin >> s[i].marks;

                    cout << "Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Record Not Found!\n";
            break;

        case 5:
            found = false;
            cout << "Enter Roll Number to Delete: ";
            cin >> roll;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    n--;
                    cout << "Record Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Record Not Found!\n";
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}