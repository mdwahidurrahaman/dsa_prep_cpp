#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int SecondLargestElement(const vector<int> &nums){

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<nums.size(); i++){
         if (nums[i] > largest){
            secondLargest = largest;
            largest = nums[i];
         }
         else if(nums[i]>secondLargest && nums[i] != largest){
            secondLargest = nums[i];
         }
        
    }
    return secondLargest;
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

    int result = SecondLargestElement(nums);

    if (result == INT_MIN){
        cout << "No distinct second largest element" << endl;
    }
    else{
        cout << "Second Largest Element: " << result << endl;
    }
       
    return 0;
}