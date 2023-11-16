#include <iostream>
#include "..\set.h"
int main() {
    set A(2);
    set B(3);
    std::cout << "Nhap tap A:\n";
    A.input();
    std::cout << "Nhap tap B:\n";
    B.input();
    std::cout << "A: ";
    A.show();
    std::cout << "B: ";
    B.show();
    if(5.5 & A) {
        std::cout << "A: ";
        A.show();
    }
    if(A == B) {
        std::cout << "A bang B" << std::endl;
    }
    if(A != B) {
        std::cout << "A khac B" << std::endl;
    }
    set G = A * B;
    std::cout << "A giao B: ";
    G.show();
    set H = A + B;
    std::cout << "A hop B: ";
    H.show();
    return 0;
}
