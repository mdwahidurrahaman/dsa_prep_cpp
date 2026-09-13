#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void  nextGreaterPermutation(vector<int> &nums){

    int i = nums.size()-2, j = nums.size()-1;

    while (i>=0 && nums[i] >= nums[i+1] ){
        i--;
    }

    if (i==-1){
        reverse(nums.begin(),nums.end());
    }
    else{
        while(j>=0){
            if (nums[j] > nums[i]){
                swap(nums[j] , nums[i]);
                reverse(nums.begin()+i+1,nums.end());
                break;
            }
            j--;
        }    
    }
}


int main() {

    vector<int> arr1 = {1,2,3},
    arr2 = {3,2,1},
    arr3 = {1,1,2};

    nextGreaterPermutation(arr1);
    nextGreaterPermutation(arr2);
    nextGreaterPermutation(arr3);


    cout << "=== Test Case 1 ===" << endl;
    for (int num:arr1) cout << num << "\t";
    cout << "\n=== Test Case 2 ===" << endl;
    for (int num:arr2) cout << num << "\t";
    cout << "\n=== Test Case 3 ===" << endl;
    for (int num:arr3) cout << num << "\t";
        


    return 0;
}