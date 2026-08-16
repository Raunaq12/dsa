#include <iostream>
using namespace std;

int main(){
    int n, before = 0, next = 1, fibonacci;
    cin >> n;
    if(n == 0){
        cout << n;
    }
    
    for(int i=1; i<=n; i++){
        cout << before << " ";
        fibonacci = before + next;
        before = next;
        next = fibonacci;
    }
}