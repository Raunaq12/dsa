#include <iostream>
#include <vector>
int main(){
    int n1, n2;
    std::vector <int> v1;
    std::vector <int> v2;
    int gcd = 0;
    std::cin >> n1 >> n2;
    for(int i=1; i<=n1; i++){
        if(n1 % i == 0){
            v1.push_back(i);
        }
    }
    for(int i=1; i<=n2; i++){
        if(n2 % i == 0){
            v2.push_back(i);
        }
    }
    std::cout << "Factors of " << n1 << " are: ";
    for(int i=0; i<v1.size(); i++){
        std::cout << v1[i] << " "; 
    }
    std::cout << "\n";
    std::cout << "Factors of " << n2 << " are: ";
    for(int i=0; i<v2.size(); i++){
        std::cout << v2[i] << " ";
    }
    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<v2.size(); j++){
            if(v1[i] == v2[j]){
                gcd = v1[i];
            }
        }
    }
    std::cout << "\n";
    std::cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd;

}