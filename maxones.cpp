#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int cnt = 0, maxi = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            cnt++;
        }
        else {
            cnt = 0;
        }

        maxi = max(cnt, maxi);
    }

    cout << maxi;

    return 0;
}