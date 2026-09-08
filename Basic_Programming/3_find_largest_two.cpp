#include <iostream>
using namespace std;


int main(){
    int num1,num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter second Number: ";
    cin >> num2;

     if (num1 > num2){
        cout << num1 << " is Highest" << endl;
     }
     else if(num1 < num2){
        cout << num2 << " is Highest" << endl;
     }
     else{
        cout << "Both are Equal" << endl;
     }
    
    return 0;
}