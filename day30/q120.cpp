#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX], age[MAX];
string name[MAX];
float marks[MAX];
int n = 0;

// Function to add student
void addStudent()
{
    cout << "\nEnter Roll Number: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Age: ";
    cin >> age[n];

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student Added Successfully!\n";
}

// Function to display students
void displayStudents()
{
    if(n == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << roll[i] << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Age     : " << age[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
    }
}

// Function to search student
void searchStudent()
{
    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Search: ";
    cin >> searchRoll;

    for(int i = 0; i < n; i++)
    {
        if(roll[i] == searchRoll)
        {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Age     : " << age[i] << endl;
            cout << "Marks   : " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Student Not Found!\n";
}

// Function to update marks
void updateMarks()
{
    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> searchRoll;

    for(int i = 0; i < n; i++)
    {
        if(roll[i] == searchRoll)
        {
            cout << "Current Marks: " << marks[i] << endl;
            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "Marks Updated Successfully!\n";
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Student Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT RECORD MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}