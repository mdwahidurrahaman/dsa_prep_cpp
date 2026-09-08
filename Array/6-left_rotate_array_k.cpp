#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void leftRotateK(vector<int> &nums, int k){

    k = k % nums.size();
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
}

int main(){
    int n,k;
    cout << "Enter Size of Array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter Array Elements: " << endl ;
    for (int i=0; i<n; i++){
        cin >>nums[i];
    }
    cout << "Enter how many place (k): ";
    cin >> k;
    leftRotateK(nums,k);

    cout << "after rotating - " << endl;
    for (int num:nums){
        cout << num;
    }
    return 0;
}