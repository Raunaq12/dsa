#include <iostream>
#include <string>
using namespace std;

int main(){
    string c;
    int hash[26] = {0};
    cout << "Enter a word: ";
    cin >> c;
    for(int i=0; i<c.size(); i++){
        hash[c[i]-'a']+=1;
    }
    char s;
    cout << "Enter a character to check: ";
    cin >> s;
    cout << hash[s-'a'];

}