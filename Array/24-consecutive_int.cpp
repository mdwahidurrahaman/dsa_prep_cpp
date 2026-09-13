#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0) return 0;

        unordered_set<int> st;
        int longest = 1;

        for (int num:nums){
            st.insert(num);
        }

        for(int el:st){
            if (st.find(el-1) == st.end()){
                int cnt = 1;
                int x = el;
        
                while (st.find(x+1) != st.end()) {
                    cnt++;
                    x++;
                }
                longest = max (longest,cnt);
           }
        }
        return longest;
    }


int main() {

    vector<int> arr1 = {4, 7, 1, 0},
    arr2 = {10, 22, 12, 3, 0, 6},
    arr3 = {1,2,3,4,5,6};

    cout << "=== Test Case 1 ===" << endl;
    cout << longestConsecutive(arr1);
    cout << "\n=== Test Case 2 ===" << endl;
    cout << longestConsecutive(arr2);
    cout << "\n=== Test Case 3 ===" << endl;
    cout << longestConsecutive(arr3);

    return 0;
}