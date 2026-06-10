#include <iostream>
using namespace std;
int main (){

int n =5;
for (int i=0;i<n;i++){

    for (int j=1;j<=i;j++){
        cout<<" ";
    }
    for (int k=1; k<=9-2*i;k++){
        cout << "*";
    }
    cout << endl;
}
    return 0;
}