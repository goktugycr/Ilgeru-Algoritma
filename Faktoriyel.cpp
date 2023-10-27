#include <iostream>
int sayiAl();
int faktoriyelBul();
void ekranaBas();
int sayi;
int fak = 1;

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
    for (int i = sayi; i >= 1; i--)
    {        
        fak *= i;
    }
    return fak;
}

void ekranaBas()
{
    std::cout << "Sonuc: " << fak << std::endl;
}

