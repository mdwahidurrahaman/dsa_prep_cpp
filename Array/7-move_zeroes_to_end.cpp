#include <iostream>
#include <vector>
using namespace std;


void moveZeroes(vector<int> &nums){

    int i = -1;
    
    for(int j=0; j<nums.size(); j++){
        if (nums[j] != 0){
            i++;
            nums[i] = nums[j];
        }
    }
    while(i+1 < nums.size()){
        i++;
        nums[i] = 0;
    }
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
    
    moveZeroes(nums);

    cout << "after moving zeroes - " << endl;
    for (int num:nums){
        cout << num;
    }
    return 0;
}