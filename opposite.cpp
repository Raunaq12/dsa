#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums(5);
    for(int i=0; i<5; i++){
        cin >> nums[i];
    }
    for(int i=0; i<5; i++){
        if(nums[i]>0){
            nums[i] = nums[i] - 2*nums[i];
        }
        else{
            nums[i] = nums[i] - 2*nums[i];
        }
    }
    for(int i=0; i<5; i++){
        cout << nums[i] << " ";
    }
}