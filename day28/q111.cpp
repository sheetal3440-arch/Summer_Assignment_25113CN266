#include <iostream>
#include <string>
using namespace std;

struct Ticket
{
    int ticketNo;
    string name;
    string destination;
    int seats;
};

int main()
{
    Ticket t[100];
    int n = 0, choice, ticketNo, i;
    bool found;

    do
    {
        cout << "\n===== Ticket Booking System =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Display All Bookings";
        cout << "\n3. Search Booking";
        cout << "\n4. Update Booking";
        cout << "\n5. Cancel Booking";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Ticket Number: ";
                cin >> t[n].ticketNo;
                cin.ignore();

                cout << "Enter Passenger Name: ";
                getline(cin, t[n].name);

                cout << "Enter Destination: ";
                getline(cin, t[n].destination);

                cout << "Enter Number of Seats: ";
                cin >> t[n].seats;

                n++;
                cout << "\nTicket Booked Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Bookings Found!\n";
                }
                else
                {
                    cout << "\n------ Booking Details ------\n";
                    for(i = 0; i < n; i++)
                    {
                        cout << "\nTicket No   : " << t[i].ticketNo;
                        cout << "\nPassenger   : " << t[i].name;
                        cout << "\nDestination : " << t[i].destination;
                        cout << "\nSeats       : " << t[i].seats << endl;
                    }
                }
                break;

            case 3:
                found = false;
                cout << "\nEnter Ticket Number to Search: ";
                cin >> ticketNo;

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        cout << "\nBooking Found:";
                        cout << "\nTicket No   : " << t[i].ticketNo;
                        cout << "\nPassenger   : " << t[i].name;
                        cout << "\nDestination : " << t[i].destination;
                        cout << "\nSeats       : " << t[i].seats << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nBooking Not Found!\n";
                break;

            case 4:
                found = false;
                cout << "\nEnter Ticket Number to Update: ";
                cin >> ticketNo;

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        cin.ignore();

                        cout << "Enter New Passenger Name: ";
                        getline(cin, t[i].name);

                        cout << "Enter New Destination: ";
                        getline(cin, t[i].destination);

                        cout << "Enter New Number of Seats: ";
                        cin >> t[i].seats;

                        cout << "\nBooking Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nBooking Not Found!\n";
                break;

            case 5:
                found = false;
                cout << "\nEnter Ticket Number to Cancel: ";
                cin >> ticketNo;

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            t[j] = t[j + 1];
                        }

                        n--;
                        cout << "\nBooking Cancelled Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nBooking Not Found!\n";
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