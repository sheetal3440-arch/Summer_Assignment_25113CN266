#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;
};

int main()
{
    Student s[100];
    int n = 0, choice, roll, i;
    bool found;

    do
    {
        cout << "\n===== Marksheet Generation System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Marksheets";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Delete Record";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> s[n].rollNo;
                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, s[n].name);

                cout << "Enter Marks of 5 Subjects: ";
                cin >> s[n].m1 >> s[n].m2 >> s[n].m3
                    >> s[n].m4 >> s[n].m5;

                s[n].total = s[n].m1 + s[n].m2 + s[n].m3 +
                             s[n].m4 + s[n].m5;

                s[n].percentage = s[n].total / 5;

                if(s[n].percentage >= 90)
                    s[n].grade = 'A';
                else if(s[n].percentage >= 75)
                    s[n].grade = 'B';
                else if(s[n].percentage >= 60)
                    s[n].grade = 'C';
                else if(s[n].percentage >= 40)
                    s[n].grade = 'D';
                else
                    s[n].grade = 'F';

                n++;
                cout << "\nMarksheet Generated Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Records Found!\n";
                }
                else
                {
                    for(i = 0; i < n; i++)
                    {
                        cout << "\n----------- MARKSHEET -----------";
                        cout << "\nRoll No    : " << s[i].rollNo;
                        cout << "\nName       : " << s[i].name;
                        cout << "\nSubject 1  : " << s[i].m1;
                        cout << "\nSubject 2  : " << s[i].m2;
                        cout << "\nSubject 3  : " << s[i].m3;
                        cout << "\nSubject 4  : " << s[i].m4;
                        cout << "\nSubject 5  : " << s[i].m5;
                        cout << "\nTotal      : " << s[i].total;
                        cout << "\nPercentage : " << s[i].percentage << "%";
                        cout << "\nGrade      : " << s[i].grade << endl;
                    }
                }
                break;

            case 3:
                found = false;
                cout << "\nEnter Roll Number: ";
                cin >> roll;

                for(i = 0; i < n; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        cout << "\nName       : " << s[i].name;
                        cout << "\nTotal      : " << s[i].total;
                        cout << "\nPercentage : " << s[i].percentage << "%";
                        cout << "\nGrade      : " << s[i].grade << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nRecord Not Found!\n";
                break;

            case 4:
                found = false;
                cout << "\nEnter Roll Number to Update: ";
                cin >> roll;

                for(i = 0; i < n; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        cout << "Enter New Marks of 5 Subjects: ";
                        cin >> s[i].m1 >> s[i].m2 >> s[i].m3
                            >> s[i].m4 >> s[i].m5;

                        s[i].total = s[i].m1 + s[i].m2 + s[i].m3 +
                                     s[i].m4 + s[i].m5;
                        s[i].percentage = s[i].total / 5;

                        if(s[i].percentage >= 90)
                            s[i].grade = 'A';
                        else if(s[i].percentage >= 75)
                            s[i].grade = 'B';
                        else if(s[i].percentage >= 60)
                            s[i].grade = 'C';
                        else if(s[i].percentage >= 40)
                            s[i].grade = 'D';
                        else
                            s[i].grade = 'F';

                        cout << "\nRecord Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nRecord Not Found!\n";
                break;

            case 5:
                found = false;
                cout << "\nEnter Roll Number to Delete: ";
                cin >> roll;

                for(i = 0; i < n; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        for(int j = i; j < n - 1; j++)
                            s[j] = s[j + 1];

                        n--;
                        cout << "\nRecord Deleted Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nRecord Not Found!\n";
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}