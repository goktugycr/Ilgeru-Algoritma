#include <iostream>

float bakiye = 1000;

void paraCek() {
    float miktar;
    std::cout << "Cekmek istediginiz miktari girin: ";
    std::cin >> miktar;
    if (miktar <= bakiye) {
        bakiye -= miktar;
        std::cout << "Kalan bakiye: " << bakiye << std::endl;
    }
    else {
        std::cout << "Yetersiz bakiye." << std::endl;
    }
}

void paraYatir() {
    float miktar;
    std::cout << "Yatirmak istediginiz miktari girin: ";
    std::cin >> miktar;
    bakiye += miktar;
    std::cout << "Yeni bakiye: " << bakiye << std::endl;
}

void bakiyeSorgula() {
    std::cout << "Mevcut bakiyeniz: " << bakiye << std::endl;
}

int main() {
    int secim;
    do {
        std::cout << "1. Bakiye Sorgula\n2. Para Cek\n3. Para Yatir\n0. Cikis\nSeciminiz: ";
        std::cin >> secim;

        switch (secim) {
        case 1:
            bakiyeSorgula();
            break;
        case 2:
            paraCek();
            break;
        case 3:
            paraYatir();
            break;
        case 0:
            std::cout << "Cikis yapiliyor..." << std::endl;
            break;
        default:
            std::cout << "Gecersiz secim!" << std::endl;
        }
    } while (secim != 0);

    return 0;
}
