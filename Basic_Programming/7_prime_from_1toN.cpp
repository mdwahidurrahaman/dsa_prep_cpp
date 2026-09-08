#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    
    for(int i=2; i<= num; i++){
        bool isPrime = true;

        for (int j=2; j*j<=i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << endl;
        }
    }
    return 0;
}