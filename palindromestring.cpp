#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, copy, temp;
    int count=0, i=0, j=0;
    getline(cin, str);
    copy = str;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    
    for(j=0; j<count/2; j++){
        temp[j] = str[j];
        str[j] = str[count-j-1];
        str[count-j-1] = temp[j];
    }
    cout << str << "\n";
    if(copy == str){
        cout << "The string is palindrome.";
    }
    else{
        cout << "The string is not palindrome.";
    }
}