#include <iostream>
using namespace std;

int main() {
    long long num;
    
    cout << "Enter a number: ";
    cin >> num;

    long long largestFactor = 0;

    for (long long i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestFactor = i;
            num /= i;
        }
    }

    cout << "Largest Prime Factor = " << largestFactor;

    return 0;
}