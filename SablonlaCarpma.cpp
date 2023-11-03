#include <iostream>

template <typename T>
T carp(T a, T b)
{
    return a * b;
}

int main()
{
    std::cout << "Iki tamsyinin carpimi: " << carp(5, 3) << std::endl;
    std::cout << "Iki ondalikli sayinin carpimi: " << carp(5.3f, 6.7f) << std::endl;
    return 0;
}


