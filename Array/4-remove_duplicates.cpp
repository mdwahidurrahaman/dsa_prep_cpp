#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int> &nums){

    int i = 0;

    for(int j=1; j<nums.size(); j++){
         if (nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
         }      
    }
    return i+1;
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

    int result = removeDuplicates(nums);
    cout << "After Removing Duplicates-"<< endl;
    for (int i=0; i<result; i++){
        cout << nums[i] << "\t";
    }
    return 0;
}