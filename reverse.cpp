#include <iostream>
int main(){
    int n, a=0, last_digit;
    std::cin >> n;
    while(n>0){
        last_digit = n%10;
        a = a*10 + last_digit;
        n = n/10;
    }
    std::cout << "The reverse number is: " << a << "\n";
    return 0;
}