#include <iostream>
int sayiAl();
int faktoriyelBul();
void ekranaBas();
int sayi;

int main()
{
    sayiAl();
    faktoriyelBul();
    ekranaBas();
}

int sayiAl()
{
    std::cout << "Bir sayi giriniz" << std::endl;
    std::cin >> sayi;
    return sayi;
}

int faktoriyelBul()
{
    int fak = 1;
    for (int i = sayi; i >= 1; i--)
    {        
        fak *= i;
    }
    return fak;
}

void ekranaBas()
{
    std::cout << "Sonuc: " << sayi << std::endl;
}

