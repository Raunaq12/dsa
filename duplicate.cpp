#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> nums;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cout << "Enter a number to insert: ";
        cin >> x;
        nums.push_back(x);
    }
    for(int i=0; i<n-1; i++){
        if(nums[i] == nums[i+1]){
            nums[i+1] = -1;
        }
    }
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    cout << "\n";
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    nums.erase(remove(nums.begin(), nums.end(), -1), nums.end());
    cout << "\n";
    cout << nums.size() << endl;
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}