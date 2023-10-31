#include <iostream>
#include <vector>

int main() {
    int sayi;
    std::vector<int> basamaklar;

    std::cout << "Lutfen bir sayi giriniz: ";
    std::cin >> sayi;

    while (sayi > 0) {
        int basamak = sayi % 10;  
        basamaklar.push_back(basamak); 
        sayi = sayi / 10; 
    }

    std::cout << "Girilen sayinin basamaklari: ";
    for (int i = basamaklar.size() - 1; i >= 0; i--) {
        std::cout << basamaklar[i] << " ";
    }

    return 0;
}


