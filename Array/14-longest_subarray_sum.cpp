#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;

// Brute Force 

int longestSubarray_brute(vector<int> &nums, int k) {

    int maxLen = INT_MIN; 

    for (int i=0; i<nums.size(); i++){
        int sum = 0;
        for (int j=i; j<nums.size(); j++){
            sum += nums[j];
            if (sum == k){
                maxLen = max (maxLen,j-i+1);
            }
        }
    }  
    return maxLen;
}  

// Optimal
int longestSubarray(vector<int> &nums, int k) {
    
    unordered_map<int, int> prefixSum;

    int maxLen = 0;
    int sum = 0;

    for (int i=0; i<nums.size(); i++){

        sum += nums[i];

        if (sum == k){
            maxLen = max(maxLen, i+1);
        }

        if (prefixSum.find(sum-k) != prefixSum.end()){
            maxLen = max(maxLen, i-prefixSum[sum-k]);
        }
        if (prefixSum.find(sum) == prefixSum.end()){
            prefixSum[sum] = i;
        }       
    }
    return maxLen;
}


int main() {

    vector<int> nums = {5, 4, -2, 6, -3, 8};
    int k = 5;

    int ans = longestSubarray(nums,k);

    cout << "Result : " << ans << endl;

    return 0;
}