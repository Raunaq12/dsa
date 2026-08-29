#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int num;
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    cout << "Enter a number to search: ";
    cin >> num;
    for(int i=0; i<5; i++){
        if(num == arr[i]){
            cout << arr[i] << " is present at " << i << " index of the array.";
        }
    }
}