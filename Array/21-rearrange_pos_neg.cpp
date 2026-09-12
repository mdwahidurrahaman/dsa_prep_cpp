#include <iostream>
#include <vector>
using namespace std;

vector<int>  rearrangePosNeg(vector<int> &nums){

    vector <int>  resultArr(nums.size());
    int posIndex = 0,
    negIndex = 1;

    for (int num:nums){
        if (num > 0){
            resultArr[posIndex] = num;
            posIndex += 2;
        }
        else{
            resultArr[negIndex] = num;
            negIndex += 2;
        }
    }
    return resultArr;
}



int main() {

    vector<int> nums = {1, 2, -4, -5, 3, -7, 5, -9};

    vector<int> ans = rearrangePosNeg(nums);

    cout << "===Result===" << endl;
    for (int num:ans){
        cout << num << "\t" ;
    }

    return 0;
}