#include <iostream>
float kilo;
float boy;
void bedenKitleIndeksiHesapla();

int main()
{
    bedenKitleIndeksiHesapla();
}

void bedenKitleIndeksiHesapla()
{
    std::cout << "Lutfen kilonuzu girin (kg)" << std::endl;
    std::cin >> kilo;
    std::cout << "Lutfen boyunuzu girin (m)" << std::endl;
    std::cin >> boy;
    float BKI = kilo / pow(boy, 2);
    if (BKI < 18.5)
    {
        std::cout << "Zayif" << std::endl;
    }
    else if (BKI >= 18.5 && BKI < 24.9)
    {
        std::cout << "Normal" << std::endl;
    }
    else if (BKI >= 24.9 && BKI < 29.9)
    {
        std::cout << "Kilolu" << std::endl;
    }
    else if (BKI >= 30)
    {
        std::cout << "Obez" << std::endl;
    }
}


