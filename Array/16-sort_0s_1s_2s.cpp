#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortZeroOneTwos(vector<int> &nums){

    int n = nums.size(),
    left=0, 
    mid=0, 
    right=n-1;

    while (mid <= right){
        
        if (nums[mid] == 0){
            swap(nums[left], nums[mid]);
            left++;
            mid++;
        }

        else if (nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid],nums[right]);
            right--;
        }
            
    }
}


int main() {

    vector<int> nums = {0, 1, 2, 1, 2, 0, 2, 0, 1};

    sortZeroOneTwos(nums);

    cout << "===Result===" << endl;
    for (int num:nums){
        cout << num;
    }

    return 0;
}