#include <iostream>
using namespace std;

int merge(int a[], int low, int mid, int high){
    int left = low, right=mid+1, k=0;
    int temp[100];
    while(left<=mid && right<=high){
        if(a[left]<a[right]){
            temp[k]=a[left];
            left++;
        }
        else{
            temp[k]=a[right];
            right++;
        }
        k++;
    }
    while(left<=right){
        temp[k]=a[left];
        left++;
        k++;
    }
    while(right<=high){
        temp[k]=a[right];
        right++;
        k++;
    }
    for(int i=low; i<=high; i++){
        a[i]=temp[i-low];
    }
}

void ms(int a[], int low, int high){
    if(low>=high)return;
    int mid = (low+high)/2;
    ms(a, low, mid);
    ms(a, mid+1, high);
    merge(a, low, mid, high);
}

int main(){
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size=10;
    ms(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}