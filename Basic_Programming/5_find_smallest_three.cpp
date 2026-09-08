#include <iostream>
using namespace std;


int main(){
    int num1,num2,num3;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter second Number: ";
    cin >> num2;
    cout << "Enter Third Number: ";
    cin >> num3;

     if (num1 <= num2 && num1 <= num3){
        cout << num1 << " is Smallest" << endl;
     }
     else if(num2 <= num3){
        cout << num2 << " is Smallest" << endl;
     }
     else{
        cout << num3 << " is Smallest" << endl;
     }
    
    return 0;
}