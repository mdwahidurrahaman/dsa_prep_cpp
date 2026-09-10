#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Brute Force 

int longestSubarray_brute(vector<int> &nums, int k) {

    int maxi = INT_MIN; 

    for (int i=0; i<nums.size(); i++){
        int sum = 0;
        for (int j=i; j<nums.size(); j++){
            sum += nums[j];
            if (sum == k){
                if ( (j - i)+1 > maxi){
                    maxi = (j-i)+1;
                }
            }
            else if ( sum > k) break;
        } 
    }   
    return maxi;
}  

// Optimal
int longestSubarray(vector<int> &nums, int k) {

    int left = 0, right = 0;
    int maxLen = 0;

    int sum = 0;

    while (right < nums.size()){

        sum += nums[right];

        while (left <= right && sum > k) {
            sum -= nums[left];
            left++;
        }

        if (sum == k){
            maxLen = max(maxLen, right-left+1);
        }

        right ++;
    }
    return maxLen;
}


int main() {

    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int ans = longestSubarray(nums,k);

    cout << "Result : " << ans << endl;

    return 0;
}