#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    vector <int>hash(n+1, 0);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    for(int i=1; i<=n; i++){
        if(hash[i] == 0){
            cout << i << " is absent from the array.";
        }
    }

}