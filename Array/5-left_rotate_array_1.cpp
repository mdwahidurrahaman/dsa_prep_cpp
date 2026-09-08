#include <iostream>
#include <vector>
using namespace std;


void leftRotate(vector<int> &nums){

    int temp = nums[0];

    for(int i=1; i<nums.size(); i++){
        nums [i-1] = nums[i];
    }
    nums[nums.size()-1] = temp;
}

int main(){
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter Array Elements: " << endl ;
    for (int i=0; i<n; i++){
        cin >>nums[i];
    }
    
    leftRotate(nums);

    cout << "after rotating - " << endl;
    for (int i=0; i<n; i++){
        cout << nums[i];
    }
    return 0;
}