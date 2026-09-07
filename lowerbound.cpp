#include <iostream>
using namespace std;

int main(){
    int arr[5] = {3, 5, 8, 15, 19};
    int x, n=5, index;
    cout << "Enter a number: ";
    cin >> x;
    for(int i=0; i<n; i++){
        if(arr[i] >= x){
            index = i;
            break;
        }
        else{
            index = n;
        }
    }
    cout << index;

}