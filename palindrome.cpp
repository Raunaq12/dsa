#include <iostream>
int main(){
    int n, copy, last_digit, a=0;
    std::cin >> n;
    copy = n;
    while(n>0){
        last_digit = n%10;
        a = a*10 + last_digit;
        n = n/10;
    }
    if(a == copy){
        std::cout << "The number is palindrome";
    }
    else{
        std::cout << "The number is not palindrome";
    }
    return 0;
}