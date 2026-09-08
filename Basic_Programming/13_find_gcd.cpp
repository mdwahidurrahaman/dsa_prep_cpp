#include <iostream>
using namespace std;


int main(){
    int num1,num2;
    cout << "Enter Number1: ";
    cin >> num1;
    cout << "Enter Number2: ";
    cin >> num2;
    num1 = abs(num1);
    num2 = abs(num2);

    while ( num2 > 0){

        int remainder = num1%num2;
        num1 = num2;
        num2 = remainder;
    }

    cout << num1 << endl;

    return 0;
}
