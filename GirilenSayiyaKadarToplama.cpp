#include <iostream>
using namespace std;

int main() {
    int sayi;
    int toplam = 0;

    cout << "Lutfen bir sayi giriniz: ";
    cin >> sayi;

    
    for (int i = 1; i <= sayi; i++) {
        toplam += i;  
    }

    cout << "1'den " << sayi << "'e kadar olan sayilarin toplami: " << toplam << endl;

    return 0;
}


