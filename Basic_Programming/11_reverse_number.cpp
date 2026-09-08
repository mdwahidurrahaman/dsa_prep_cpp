#include <iostream>
using namespace std;


int main(){
     int num;
     cout << "Enter Number: ";
     cin >> num;
     int sign = (num < 0)? -1:1;
     num = abs(num);

    long long reversedNumber = 0;

    while (num > 0){

        int digit = num % 10;

        reversedNumber = reversedNumber*10 + digit;

        num = num/10;

    }
    reversedNumber = reversedNumber*sign;
    cout << reversedNumber << endl;

    return 0;
}
