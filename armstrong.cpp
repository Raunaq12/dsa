#include <iostream>
int main(){
    int n, a=0, last_digit, b;
    std::cin >> n;
    b = n;
    while(n>0){
        last_digit = n%10;
        a += last_digit * last_digit * last_digit;
        n = n/10;
    }
    if(a == b){
        std::cout << "True"; 
    }
    else{
        std::cout << "False";
    }
}


