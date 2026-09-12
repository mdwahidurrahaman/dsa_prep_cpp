#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int  buysellStock(const vector<int> &nums){

    int n = nums.size();
    int maxProfit = 0;

    int minPrice = INT_MAX;

    for (int num : nums){

        minPrice = min(num,minPrice);

        int profit = num - minPrice;
        maxProfit = max(profit, maxProfit);
    }
    return maxProfit;
}



int main() {

    vector<int> nums = {7,1,5,3,6,4};

    int ans = buysellStock(nums);

    cout << "===Result===" << endl;
    cout << ans ;

    return 0;
}