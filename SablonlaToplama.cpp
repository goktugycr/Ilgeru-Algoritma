#include <iostream>

template <typename T>
T topla(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Iki tamsayinin toplami: " << topla(5, 3) << std::endl;
    std::cout << "Iki ondalikli sayinin toplami: " << topla(6.2f, 5.3f) << std::endl;
    return 0;
}

