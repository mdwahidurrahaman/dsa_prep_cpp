#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int largestSubarraySum(const vector<int> &nums){

    int n = nums.size(),
    largestSum = INT_MIN,
    sum=0;

    for (int i=0; i<n; i++){
        sum += nums[i];

        if (sum > largestSum){
            largestSum = sum;
        }

        if (sum < 0){
            sum = 0;
        }  
    }
    return largestSum;
}



int main() {

    vector<int> nums = {2, 3, 5, -2, 7, -4};

    int ans = largestSubarraySum(nums);

    cout << "===Result===" << endl;
    cout << ans << endl;

    return 0;
}