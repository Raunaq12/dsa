#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int arr[5] = {2,2,1};
    int n = 5;
    map<int, int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    for(auto x : hash){
        if(x.second == 1){
            cout << "Single appearing element is: " << x.first;
        }
    }
}