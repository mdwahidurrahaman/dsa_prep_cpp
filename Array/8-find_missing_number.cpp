#include <iostream>
#include <vector>
using namespace std;


int findMissingNumber_Sum(vector<int> &nums){

    int n = nums.size();
    int originalSum = (n*(n+1))/2;
    int arraySum = 0;

    for(int i=0; i<nums.size(); i++){
        arraySum += nums[i];
    }
    int missingNumber = originalSum - arraySum;

    return missingNumber;
}
int findMissingNumber_Xor(vector<int> &nums){

    int xor1=0,xor2=0;

    for(int i=0; i<nums.size(); i++){
        xor1 ^= nums[i];
    }

    for(int i=1; i<= nums.size(); i++){
        xor2 ^= i;
    }

    return xor1^xor2;
}


int main(){
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter Array Elements: " << endl ;
    for (int i=0; i<n; i++){
        cin >>nums[i];
    }

    cout << "Missing Number -  " << findMissingNumber_Xor(nums) << endl;
    
    return 0;
}