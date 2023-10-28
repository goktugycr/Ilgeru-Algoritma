#include <iostream>
int not1;
int not2;
int not3;
float ort;
bool kontrol = not1 > 100 || not2 > 100 || not3 > 100;
void notAl();
float ortHesapla();
void ekranaBas();
int main()
{
    notAl();
    ort = ortHesapla();
    ekranaBas();
}

void notAl()
{
    std::cout << "Uc sinav notunuzu sirasiyla girin" << std::endl;
    std::cin >> not1 >> not2 >> not3;

}

float ortHesapla() {
    bool kontrol = not1 > 100 || not2 > 100 || not3 > 100;
    if (kontrol) {
        std::cout << "Yanlis giris yaptiniz" << std::endl;
        return 0;
    }
    else {
        return not1 * 0.2 + not2 * 0.7 + not3 * 0.3;
    }
}

void ekranaBas() {
    if (ort != 0) {
        std::cout << "Ortalamaniz: " << ort << std::endl;
    }
}