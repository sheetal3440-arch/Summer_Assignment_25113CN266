#include <iostream>
using namespace std;

int main()
{
    char ans;
    int score = 0;

    cout << "===== Quiz Application =====\n";

    
    cout << "\n1. What is the capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Chennai\nd) Kolkata\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 'b' || ans == 'B')
        score++;

    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "a) HTML\nb) Python\nc) C++\nd) JavaScript\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 'c' || ans == 'C')
        score++;

    
    cout << "\n3. How many days are there in a week?\n";
    cout << "a) 5\nb) 6\nc) 7\nd) 8\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 'c' || ans == 'C')
        score++;

    
    cout << "\n===== Result =====\n";
    cout << "Your Score: " << score << " out of 3\n";

    if (score == 3)
        cout << "Excellent!";
    else if (score == 2)
        cout << "Good Job!";
    else
        cout << "Keep Practicing!";

    return 0;
}