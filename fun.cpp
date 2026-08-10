#include <iostream>

class myClass{
    public:
        void function();
};

void myClass::function(){
    std::cout << "Hello World";
}

int main(){
    myClass obj;
    obj.function();
}