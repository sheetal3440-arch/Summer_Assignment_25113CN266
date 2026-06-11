#include <iostream>
using namespace std;
int main(){

    int n;
    long long factorial = 1;

    cout << "enter a number";
    cin >> n;
 for ( int i =1 ; i<= n ; i++){
    factorial *=i;

    cout << "factorial of " << n << " is "<< factorial << endl;

    
 }
    return 0;
}