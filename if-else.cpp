#include <iostream>
int main(){
    int marks;
    std::cout << "Enter number of marks: " << "\n";
    std::cin >> marks;
    if(marks>=90){
        std::cout << "Grade A" << "\n";
    }
    else if(marks>=70 && marks<90){
        std::cout << "Grade B" << "\n";
    }
    else if(marks>=50 && marks<70){
        std::cout << "Grade C" << "\n";
    }
    else if(marks>=35 && marks<50){
        std::cout << "Grade D" << "\n";
    }
    else{
        std::cout << "Fail" << "\n";
    }
    return 0;

}