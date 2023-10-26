#include <iostream>
#include<cmath>
float sayi1;
float sayi2;
float karelertoplami;
float hipotenus;
void sayilariAl();
int hipotenusHesapla();
void ekranaBas();

int main()
{
    sayilariAl();
    hipotenusHesapla();
    ekranaBas();
}

void sayilariAl() {
    std::cout << "Dik Ucgenin Dik Kenarlarının Uzunluklarini Giriniz." << std::endl;
    std::cin >> sayi1;
    std::cin >> sayi2;
}

int hipotenusHesapla() {
    karelertoplami = pow(sayi1, 2) + pow(sayi2, 2);
    hipotenus = sqrt(karelertoplami);
    return hipotenus;
}

void ekranaBas() {
    std::cout << "hipotenus: " << hipotenus << std::endl;
}


