#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Enter number of steps: ";
    cin >> k;
    int temp = v[n-1];
    while(k>0){
        for(int i=1; i<n-1; i++){
            v[i] = v[i-1];
    }
    k--;
    }
    v[0] = temp;
    
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}