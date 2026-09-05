#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, left, right, mid, check=0, target;
    left = 0;
    right = n-1;
    cout << "Enter a number to check in the array: ";
    cin >> target;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid] == target){
            check = 1;
        }
        if(arr[mid] < target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }

    }
    if(check){
        cout << "Number is present.";
    }
    else{
        cout << "Number is not present.";
    }
}