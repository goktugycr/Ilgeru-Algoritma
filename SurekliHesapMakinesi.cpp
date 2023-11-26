#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>

using namespace std;

class Sayi {
public:
    double sayi1;
    double sayi2;
    int islem;
};

int maxBul(int sayi1, int sayi2) {
    int max = sayi2;
    if (sayi1 >= sayi2) {
        max = sayi1;
    }
    cout << "En Buyuk: " << max << endl;
    return max;
}

int minBul(int sayi1, int sayi2) {
    int min = sayi2;
    if (sayi1 <= sayi2) {
        min = sayi1;
    }
    cout << "En Kucuk: " << min << endl;
    return min;
}

int modAlma(int sayi1, int sayi2) {
    int sonuc = sayi1 % sayi2;
    cout << "Sonucunuz: " << sonuc << endl;
    return sonuc;
}

double LogBulma(double taban, double deger) {

    double sonuc = 0;

    sonuc = log(deger) / log(taban);

    cout << "Log " << taban << " tabaninda " << deger << " = " << sonuc << endl;
    return sonuc;
}

int main() {
    Sayi sayi;
    double sonuc;
    do {
        cout << "Birinci sayiyi giriniz." << endl;
        cin >> sayi.sayi1;
        cout << "Ikinci sayiyi giriniz." << endl;
        cin >> sayi.sayi2;
        cout << "Yapmak istediginiz islemi giriniz ( 1)+, 2)-, 3)*, 4)/, 5)x^y, 6)log, 7)ort, 8)mod, 9)maxbul, 10)minbul )" << endl;
        cin >> sayi.islem;
        switch (sayi.islem) {
        case 1:
            cout << "Sonucunuz: " << sayi.sayi1 + sayi.sayi2 << endl;
            break;
        case 2:
            cout << "Sonucunuz: " << sayi.sayi1 - sayi.sayi2 << endl;
            break;
        case 3:
            cout << "Sonucunuz: " << sayi.sayi1 * sayi.sayi2 << endl;
            break;
        case 4:
            
            if (sayi.sayi2 != 0) {
                cout << "Sonucunuz: " << sayi.sayi1 / sayi.sayi2 << endl;
            }
            else {
                cout << "Hata: Sifira bolme!" << endl;
            }
            break;
        case 5:
            sonuc = pow(sayi.sayi1, sayi.sayi2);
            cout << "Sonucunuz: " << sonuc << endl;
            break;
        case 6:
            LogBulma(sayi.sayi1, sayi.sayi2);
            break;
        case 7:
            sonuc = (sayi.sayi1 + sayi.sayi2) / 2;
            cout << "Sonucunuz: " << sonuc << endl;
            break;
        case 8:
            modAlma(sayi.sayi1, sayi.sayi2);
            break;
        case 9:
            maxBul(sayi.sayi1, sayi.sayi2);
            break;
        case 10:
            minBul(sayi.sayi1, sayi.sayi2);
            break;
        default:
            cout << "Gecersiz karakter..." << endl;
        }

        cout << "Tekrar islem yapabilmek icin herhangi bir tusa basin..." << endl;
        while (!_kbhit()) { 
            Sleep(500); 
        }
        cin.ignore(); 
        cin.get(); 

        system("cls"); 

    } while (true);

    return 0;
}
