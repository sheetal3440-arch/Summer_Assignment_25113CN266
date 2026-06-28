#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int choice;

    cout << "Enter First String: ";
    cin.getline(str1, 100);

    do
    {
        cout << "\n===== MENU DRIVEN STRING OPERATIONS =====";
        cout << "\n1. Find Length";
        cout << "\n2. Copy String";
        cout << "\n3. Concatenate Strings";
        cout << "\n4. Compare Strings";
        cout << "\n5. Reverse String";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                cout << "Length = " << strlen(str1) << endl;
                break;

            case 2:
                strcpy(str2, str1);
                cout << "Copied String: " << str2 << endl;
                break;

            case 3:
                cout << "Enter Second String: ";
                cin.getline(str2, 100);
                strcat(str1, str2);
                cout << "Concatenated String: " << str1 << endl;
                break;

            case 4:
                cout << "Enter Second String: ";
                cin.getline(str2, 100);

                if(strcmp(str1, str2) == 0)
                    cout << "Strings are Equal." << endl;
                else
                    cout << "Strings are Not Equal." << endl;
                break;

            case 5:
            {
                int len = strlen(str1);
                cout << "Reversed String: ";
                for(int i = len - 1; i >= 0; i--)
                    cout << str1[i];
                cout << endl;
                break;
            }

            case 6:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}