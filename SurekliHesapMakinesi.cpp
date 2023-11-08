#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;

class Sayi {
public:
    float sayi1;
    int sayi2;
    char islem;
};

int main() {
    Sayi sayi;
    do {
        cout << "Birinci sayiyi giriniz." << endl;
        cin >> sayi.sayi1;
        cout << "Ikinci sayiyi giriniz." << endl;
        cin >> sayi.sayi2;
        cout << "Yapmak istediginiz islemi giriniz (+, -, *, /)" << endl;
        cin >> sayi.islem;
        switch (sayi.islem) {
        case '+':
            cout << "Sonucunuz: " << sayi.sayi1 + sayi.sayi2 << endl;
            break;
        case '-':
            cout << "Sonucunuz: " << sayi.sayi1 - sayi.sayi2 << endl;
            break;
        case '*':
            cout << "Sonucunuz: " << sayi.sayi1 * sayi.sayi2 << endl;
            break;
        case '/':
            
            if (sayi.sayi2 != 0) {
                cout << "Sonucunuz: " << sayi.sayi1 / sayi.sayi2 << endl;
            }
            else {
                cout << "Hata: Sifira bolme!" << endl;
            }
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
