#include <iostream>
#include <vector>
#include <climits>
using namespace std;

pair <int, int> largestSumSubarray(const vector<int> &nums){

    int n = nums.size(),
    largestSum = INT_MIN,
    currentSum = 0,
    start =0;

    pair <int, int> subArr = {0,0};

    for (int i=0; i<n; i++){
        currentSum += nums[i];

        if (currentSum > largestSum){
            largestSum = currentSum;
            subArr = {start, i};
        }

        if (currentSum < 0){
            currentSum = 0;
            start = i+1 ;
        }
    }
    return subArr;
}



int main() {

    vector<int> nums = {-2, -3, -7, -2, -10, -4};

    pair<int, int> ans = largestSumSubarray(nums);

    cout << "===Result===" << endl;
    for (int i=ans.first; i<=ans.second; i++){
        cout << nums[i] << "\t" ;
    }

    return 0;
}