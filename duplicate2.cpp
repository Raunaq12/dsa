#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s1;
    vector<int> v1;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i=0; i<n; i++){
        s1.insert(v1[i]);
    }
    int index = 0;
    for(auto it : s1){
        v1[index] = it;
        index++; 
    }
    cout << "unique: " << index;

}