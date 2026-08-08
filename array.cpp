#include <iostream>
int main(){
    int n;
    int arr[n], temp;
    std::cout << "enter size of array: ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i]; 
    }
    for(int i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[5-i-1];
        arr[5-i-1] = temp;
    }
    for(int i=0; i<5; i++){
        std::cout << "New array is: " << arr[i] << "\n";
    }
}