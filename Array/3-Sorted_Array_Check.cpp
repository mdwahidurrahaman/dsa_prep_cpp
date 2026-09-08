#include <iostream>
#include <vector>
using namespace std;


bool sortedArray(const vector<int> &nums){

    bool sorted = true;
    for(int i=1; i<nums.size(); i++){
         if (nums[i] < nums[i-1]){
            sorted = false;
            break;
         }      
    }
    return sorted;
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

    bool result = sortedArray(nums);
    if(result){
        cout << "Array is Sorted" << endl;
    }
    else{
        cout<< "Array is not sorted" << endl;
    }
    return 0;
}