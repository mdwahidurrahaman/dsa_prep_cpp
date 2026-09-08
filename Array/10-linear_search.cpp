#include <iostream>
#include <vector>
using namespace std;


int linearSearch(const vector<int> &nums, int key){

    
    for(int i=0; i<nums.size(); i++){
        if (nums[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout << "Enter Size of Array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter Array Elements: " << endl ;
    for (int i=0; i<n; i++){
        cin >>nums[i];
    }
    cout << "Enter Search Elements: " ;
    cin >> key;

    int result = linearSearch(nums,key);
    if (result == -1){
        cout << "Element not found!" << endl;
    }
    else{
        cout << "Element found at index: " << result << endl;
    }
    return 0;
}