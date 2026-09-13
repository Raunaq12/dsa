#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<int> digits;
    int n = 102030004, newNum=0;
    while(n>0){
        int rem = n%10;
        if(rem!=0){
            digits.push_back(rem);
            }
        n=n/10;
    }
    for(auto i:digits){
        cout << i << " ";
    }
    int size = digits.size();
    for(int i=size-1; i>=0; i--){
        newNum += digits[i] * pow(10, size-i-1); 
        }
        cout << "\n" << newNum;
}