#include <iostream>
int sayi1;
int sayi2;
int sayi3;
int enkucuk;
int enKucukBul();
void sayiGir();
void ekranaBas();

int main()
{
    sayiGir();
    enKucukBul();
    ekranaBas();
}

void sayiGir() {
    std::cout << "3 adet sayi giriniz" << std::endl;
    
    std::cin >> sayi1;
   
    std::cin >> sayi2;
    
    std::cin >> sayi3;
}

int enKucukBul() {
    enkucuk = sayi1;
    if (sayi2 < enkucuk) {
        enkucuk = sayi2;
    }
    if (sayi3 < enkucuk) {
        enkucuk = sayi3;
    }
    return enkucuk;
}

void ekranaBas() {
    std::cout << "en kucuk sayi: " << enkucuk << std::endl;
}


