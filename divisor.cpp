#include <iostream>
#include <vector>
int main(){
    int num;
    std::vector<int> v;
    std::cin >> num;
    for(int i=1; i<=num; i++){
        if(num % i == 0){
            v.push_back(i);
        }
    }
    std::cout << "Divisors of " << num << " are: ";
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
    }
    return 0;
}