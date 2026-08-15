#include <iostream>
using namespace std;

int func(int n){
    int sum=0;
    if(n==1){
        return 1;
    }
    return sum += n + func(n-1);
}
    int main(){
    int n;
    cin >> n;
    cout << func(n);
}