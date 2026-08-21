#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    int length = sizeof(arr)/sizeof(arr[0]);
    if(length < 3){
        cout << -1;
    }
    else{
        cout << "2nd largest element: " << arr[n-1] << "\n2nd lowest element: " << arr[1];
    }
}