#include <iostream>
int faktoriyel(int sayi) {
    if (sayi == 0) {
        return 1;
    }
    else {
        return sayi * faktoriyel(sayi - 1);
    }
}
int main()
{
    int sayi;
    std::cout << "Bir sayi girin: ";
    std::cin >> sayi;

    std::cout << sayi << "! = " << faktoriyel(sayi) << std::endl;

    return 0;
}

