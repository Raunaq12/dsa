#include <iostream>
#include <map>
using namespace std;

int main(){
    int arr[10];
    map <int, int> mpp;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i<10;i++){
        mpp[arr[i]]++;
    }
    cout << "Enter the number of times to check: ";
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << number << " is present " <<  mpp[number] << " times" << endl;
    }
    
}