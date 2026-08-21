#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for(auto num : v1){
        cout << num << " ";
    }
}
