#include <iostream>
#include <vector>
using namespace std;

int numberAppearOnce(vector<int> &nums) {

    int xorr = 0;

    for (int i=0; i<nums.size(); i++){
        xorr ^= nums[i];
    }
    return xorr;
    
}

int main() {

    vector<int> nums = {1, 2, 3, 1, 2, 4, 4, 5, 5};

    int ans = numberAppearOnce(nums);

    cout << "Result : " << ans << endl;

    return 0;
}