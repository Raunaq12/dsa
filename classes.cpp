#include <iostream>


class Myclass{
    public:
        int myNum;
        std::string myString;
};

int main(){
    Myclass myObj;
    myObj.myNum = 15;
    std::cout << myObj.myNum;
}