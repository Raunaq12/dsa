#include <iostream>
#include<vector>
int main(){
    std::vector<int> v;
    long long int n;
    std::cin >> n;
    while(n>0){
        int a = n%10;
        v.push_back(a);
        n = n/10;
    }
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Number of digits in the given number is: " << v.size() << "\n";
    return 0;
    
}