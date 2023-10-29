#include <iostream>
#include<windows.h>   
int sayiOlustur();
int tahminEt();
void kontrolEt();
int sayi;
int tahmin;
bool sayiMi = true;;

int main()
{
    srand(time(nullptr));
    sayiOlustur();
    tahminEt();
    kontrolEt();
}

int sayiOlustur()
{
    std::cout << "Rastgele sayi olusturuluyor..." << std::endl;
    std::cout << "------" << std::endl;
    Sleep(1000);
    std::cout << "---------" << std::endl;
    Sleep(1000);
    std::cout << "------------" << std::endl;
    sayi = rand() % 20;
    return sayi;
}

int tahminEt()
{
    std::cout << "Sayiyi tahmin edin" << std::endl;
    std::cin >> tahmin;
    return tahmin;
}

void kontrolEt()
{
    if (tahmin == sayi)
    {
       std::cout << "Tebrikler tahmininiz dogru" << std::endl;
    }
    else if (tahmin != sayi)
    {
        std::cout << "Uzgunum tahmininiz yanlis sayi " << sayi << " idi" << std::endl;
    }       
}

 

