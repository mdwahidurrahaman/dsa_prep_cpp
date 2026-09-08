#include <iostream>
#include <vector>
using namespace std;


int largestElement(vector<int> &nums){

    int largest = nums[0];
    for(int i=1; i<nums.size(); i++){
         if (nums[i] > largest){
            largest = nums[i];
         }
        
    }
    return largest;
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

    int result = largestElement(nums);

    cout << "Largest Element: " << result << endl;
    return 0;
}