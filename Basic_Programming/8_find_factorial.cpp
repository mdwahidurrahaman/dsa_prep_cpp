#include <iostream>
using namespace std;


int main(){
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    long long fact =1;

    if(num < 0){
        cout << "Factorial is not Possible" << endl;
        return 0;
    }

    for (int i=2; i<= num; i++){
            fact *= i;
    }

    cout << fact << endl;

    return 0;
}