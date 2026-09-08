#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  maxConsecutiveOnes(const vector<int> &nums){

    int count = 0, maxi = 0;

    for (int i=0; i<nums.size(); i++){
        if (nums[i] == 1){
            count++;
            if (count > maxi){
                maxi=count;
            }
        }
        else{
            count = 0;
        }
    }
    return maxi;
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

    cout << "Maximum Consecutive Ones - " << maxConsecutiveOnes(nums) <<endl;
    
    return 0;
}