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
    while(k>0){
        for(int i=0; i<n-1; i++){
        int temp;
        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
    }
    k--;
    }
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}