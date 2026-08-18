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
    cout << "Enter how many times to check: ";
    cin >> q;
    while(q--){
    cout << "Enter a number: ";
    cin >> m;
    cout << "The number " << m << " is present " << hash[m] << " times.\n";
    }

}