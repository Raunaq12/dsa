#include <iostream>
int main(){
    int lownum, highnum, sum = 0;
    std::cin >> lownum >> highnum;
    for(int i=lownum; i<=highnum; i++){
        sum += i;
    }
    std::cout << "the sum is: " << sum << "\n";
    return 0; 

}