#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
    int original = n;
    int sum = 0, digit;
    int count = 0, temp = n;

    while (temp > 0){
        count++;
        temp /=10;
    }

    temp = n;

    while (temp > 0){
        digit = temp %10;
        sum += pow(digit, count);
        temp = temp/10;
    }
    return (sum == original);
}
int main () {
    int n;
    cout << " enter a number: ";
    cin >> n;
     
    if (isArmstrong(n))
        cout << "armstrong number";
    else
        cout << "not an armstrong number";

    return 0;
}