#include <iostream>
using namespace std;

int func(int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    func(n-1);
    return sum += n;
}
    int main(){
    int n;
    cin >> n;
    cout << func(n);
}