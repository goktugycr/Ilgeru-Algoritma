#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    std::cout << "Fibonacci dizisinin kacinci elemanini hesaplamak istediginizi girin: ";
    std::cin >> num;

    std::cout << num << ". Fibonacci sayisi: " << fibonacci(num) << std::endl;
    return 0;
}


