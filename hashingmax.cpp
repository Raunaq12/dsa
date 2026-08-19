#include <iostream>
using namespace std;

int main(){
    int n, q;
    int m;
    cout << "Enter the size of the array: ";
    cin >> n;
    int hash[n] = {0}, arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }
    int max_frequency = hash[0];
    int min_frequency = n+1;
    for(int i=0; i<n; i++){
        if(hash[i] > max_frequency){
            max_frequency = hash[i];
        }
    }
    for(int i=0; i<n; i++){
        if(hash[i] < min_frequency && hash[i] > 0){
            min_frequency = hash[i];
        }
    }
    cout << max_frequency << " " <<  min_frequency;

}