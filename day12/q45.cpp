#include <iostream>
using namespace std;

bool ispalindrome(int n){
    
    int original = n;
    int reverse =0 , rem;
     
 while (n > 0){
    rem = n %10;
    reverse = reverse*10 + rem;
    n = n/10;
 }
 return (original == reverse);
}

int main () {
    int n;
    cout << "enter a number: " ;
    cin >> n;

    if (ispalindrome(n))
        cout << "palindrome number";
    else
        cout << "not a palindrome number";

    cout << endl;

    return 0;
}