#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

vector<int>  findLeaders(const vector<int> &nums){
    
    int n = nums.size();
    vector<int> leaders;

    int largest = nums[n-1];
    leaders.push_back(largest);


    for (int i=n-2; i>=0; i--){
        if (nums[i] > largest){
            largest = nums[i];
            leaders.push_back(nums[i]);
        }
    }
    reverse(leaders.begin(),leaders.end());
    return leaders;
}


int main() {

    vector<int> arr1 = {4, 7, 1, 0},
    arr2 = {10, 22, 12, 3, 0, 6},
    arr3 = {1,2,3,4,5,6};

    cout << "=== Test Case 1 ===" << endl;
    for (int num:findLeaders(arr1)) cout << num << "\t";
    cout << "\n=== Test Case 2 ===" << endl;
    for (int num:findLeaders(arr2)) cout << num << "\t";
    cout << "\n=== Test Case 3 ===" << endl;
    for (int num:findLeaders(arr3)) cout << num << "\t";
        


    return 0;
}