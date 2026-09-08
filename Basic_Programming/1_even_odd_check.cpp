#include <iostream>
using namespace std;


int main(){
     int num;
     cout << "Enter the Number to be checked: ";
     cin >> num;
     if (num %2 == 0){
        cout << num << " is a Even Number" << endl ;
     }
     else{
        cout << num << " is a Odd Number" << endl ;
     }  
    return 0;
}
