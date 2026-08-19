#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << "Enter a character: ";
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]] += 1;
    }
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << hash[c];
}