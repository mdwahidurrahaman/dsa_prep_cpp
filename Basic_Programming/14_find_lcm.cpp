#include <iostream>
using namespace std;


int main(){
    int num1,num2;
    cout << "Enter Number1: ";
    cin >> num1;
    cout << "Enter Number2: ";
    cin >> num2;

    int originalNum1 = abs(num1);
    int originalNum2 = abs(num2);

    if ( originalNum1 == 0 or originalNum2 == 0){
        cout << 0 << endl;
        return 0;
    }

    num1 = originalNum1;
    num2 = originalNum2;

    while ( num2 > 0){

        int remainder = num1%num2;
        num1 = num2;
        num2 = remainder;
    }

    long long lcm = ((long long)originalNum1 / num1) * originalNum2;

    cout << lcm << endl;

    return 0;
}
