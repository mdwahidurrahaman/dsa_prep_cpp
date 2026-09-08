#include <iostream>
using namespace std;


int main(){

     int num;
     cout << "Enter Number: ";
     cin >> num;
     num = abs(num);
     int sum = 0;

     while (num > 0){

        int digit = num % 10;
        sum += digit;

        num = num/10;
     }
     cout << sum << endl;

    return 0;
}
