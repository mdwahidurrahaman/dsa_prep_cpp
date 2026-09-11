#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
using namespace std;

pair<int, int> twoSum(const vector<int> &nums, int k){

    unordered_map<int, int> mp;

    for (int i=0; i<nums.size(); i++){
        int needed = k- nums[i];

        if (mp.find(needed) != mp.end()){
            return {mp[needed],i};
        }
        mp[nums[i]]=i;
    }
    return {};
}


int main() {

    vector<int> nums = {5, 4, 8, 2, 3, 9};
    int k = 12;

    pair<int, int> ans = twoSum(nums,k);

    cout << "Result Index: " << ans.first << " and " << ans.second << endl;

    return 0;
}