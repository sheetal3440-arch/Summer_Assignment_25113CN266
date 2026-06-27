#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess, attempts = 0;

    
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
            cout << "Too High! Try Again.\n";
        else if (guess < number)
            cout << "Too Low! Try Again.\n";
        else
            cout << "Congratulations! You guessed the correct number." << endl;

    } while (guess != number);

    cout << "Number of attempts: " << attempts << endl;

    return 0;
}