#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int count = 0, i=0;
    while(s[i] != '\0'){
        count++;
        i++;
    }
    cout << count;
}