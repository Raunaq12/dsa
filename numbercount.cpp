#include <iostream>
using namespace std;

int function(int x);

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    function(num);
    
}

int function(int x){
    int arr[10], count = 0;
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<10; i++){
        if(x == arr[i]){
            count++;
        }
    }
    cout << "The number is present " << count << " times." << endl;
}