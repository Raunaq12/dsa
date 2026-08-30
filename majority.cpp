#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n, max, index;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> hash(n+1, 0);
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    max = hash[0];
    for(int i=0; i<n; i++){
        if(hash[i]>max){
            max = hash[i];
            index = i;
        } 
    }
    cout << "The majority element of the array is: " << index;


    
}