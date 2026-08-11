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
    if(v.size() == 2){
        std::cout << "True";
    }
    else{
        std::cout << "False";
    }
}