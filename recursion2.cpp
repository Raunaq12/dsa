#include <iostream>
using namespace std;

void function(int n){
    if(n == 0){
        return;
    }
    function(n-1);
    cout << n << ", ";
}
int main(){
    int n;
    cin >> n;
    function(n);
}