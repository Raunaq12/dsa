#include <iostream>
using namespace std;
int main(){
    int arr[15] = {42, 17, 89, 3, 56, 91, 24, 73, 11, 68, 35, 82, 5, 49, 27};
    int min_element = arr[0];
    for(int i=1; i<14; i++){
        int min = i;
        for(int j=i+1; j<15; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        }
    for(int i=0; i<15; i++){
        cout << arr[i] << " ";
    }
    
}
