#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int> &nums){

    int n = nums.size(),
    count = 0,
    element = 0;

    for (int i=0; i<n; i++){

        if (count == 0){
            element = nums[i];
        }
        if (element == nums[i]) count ++;
        else count--;
    }

    count = 0;
    for (int num:nums){
        if (num == element) count++;
        if (count > n/2 ) return element;
    }
    return -1;
}




int main() {

    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    int ans = majorityElement(nums);

    cout << "===Result===" << endl;
    cout << ans << endl;

    return 0;
}