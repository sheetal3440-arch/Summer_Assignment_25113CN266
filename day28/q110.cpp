#include <iostream>
#include <string>
using namespace std;

struct Bank
{
    int accNo;
    string name;
    float balance;
};

int main()
{
    Bank b[100];
    int n = 0, choice, acc, i;
    float amount;
    bool found;

    do
    {
        cout << "\n===== Bank Account Management System =====";
        cout << "\n1. Create Account";
        cout << "\n2. Display All Accounts";
        cout << "\n3. Search Account";
        cout << "\n4. Deposit Money";
        cout << "\n5. Withdraw Money";
        cout << "\n6. Delete Account";
        cout << "\n7. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Account Number: ";
                cin >> b[n].accNo;
                cin.ignore();

                cout << "Enter Account Holder Name: ";
                getline(cin, b[n].name);

                cout << "Enter Initial Balance: ";
                cin >> b[n].balance;

                n++;
                cout << "\nAccount Created Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Account Found!\n";
                }
                else
                {
                    cout << "\n------ Account Details ------\n";
                    for(i = 0; i < n; i++)
                    {
                        cout << "\nAccount No : " << b[i].accNo;
                        cout << "\nName       : " << b[i].name;
                        cout << "\nBalance    : " << b[i].balance << endl;
                    }
                }
                break;

            case 3:
                found = false;
                cout << "\nEnter Account Number: ";
                cin >> acc;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == acc)
                    {
                        cout << "\nAccount Found:";
                        cout << "\nAccount No : " << b[i].accNo;
                        cout << "\nName       : " << b[i].name;
                        cout << "\nBalance    : " << b[i].balance << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nAccount Not Found!\n";
                break;

            case 4:
                found = false;
                cout << "\nEnter Account Number: ";
                cin >> acc;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == acc)
                    {
                        cout << "Enter Deposit Amount: ";
                        cin >> amount;

                        b[i].balance += amount;
                        cout << "\nAmount Deposited Successfully!";
                        cout << "\nUpdated Balance: " << b[i].balance << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nAccount Not Found!\n";
                break;

            case 5:
                found = false;
                cout << "\nEnter Account Number: ";
                cin >> acc;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == acc)
                    {
                        cout << "Enter Withdrawal Amount: ";
                        cin >> amount;

                        if(amount <= b[i].balance)
                        {
                            b[i].balance -= amount;
                            cout << "\nWithdrawal Successful!";
                            cout << "\nRemaining Balance: " << b[i].balance << endl;
                        }
                        else
                        {
                            cout << "\nInsufficient Balance!\n";
                        }

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nAccount Not Found!\n";
                break;

            case 6:
                found = false;
                cout << "\nEnter Account Number to Delete: ";
                cin >> acc;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == acc)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            b[j] = b[j + 1];
                        }

                        n--;
                        cout << "\nAccount Deleted Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nAccount Not Found!\n";
                break;

            case 7:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}