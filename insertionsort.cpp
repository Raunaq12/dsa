#include <iostream>
using namespace std;
int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    for(int i=0; i<5; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
}