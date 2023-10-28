#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2;
    char islem;

    cout << "Iki sayi giriniz: ";
    cin >> sayi1 >> sayi2;
    cout << "Bir islem seciniz (+, *, -, /): ";
    cin >> islem;

    switch (islem) {
    case '+':
        cout << "Sonuc: " << sayi1 + sayi2 << endl;
        break;
    case '*':
        cout << "Sonuc: " << sayi1 * sayi2 << endl;
        break;
    case '-':
        cout << "Sonuc: " << sayi1 - sayi2 << endl;
        break;

    case '/':
        if (sayi2 != 0)
            cout << "Sonuc: " << sayi1 / sayi2 << endl;
        else
            cout << "Bir sayiyi 0'a bolemezsiniz!" << endl;
        break;
    default:
        cout << "Gecersiz islem!" << endl;
    }

    return 0;
}


