#include <iostream>
using namespace std;

void function(){
    cout << "1\n";
    function();
}
int main(){
    function();
}