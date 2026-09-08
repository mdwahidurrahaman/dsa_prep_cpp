#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    if (num < 0) {
        cout << "NOT ARMSTRONG!" << endl;
        return 0;
    }

    
    int temp = num;
    int digitsCount = 0;
    if (temp == 0) digitsCount = 1;
    while (temp > 0) {
        digitsCount++;
        temp /= 10;
    }

    long long armstrongSum = 0;
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        armstrongSum += round(pow(digit, digitsCount)); 
        temp /= 10;
    }

    if (num == armstrongSum) {
        cout << "ARMSTRONG!" << endl;
    } else {
        cout << "NOT ARMSTRONG!" << endl;
    }

    return 0;
}
