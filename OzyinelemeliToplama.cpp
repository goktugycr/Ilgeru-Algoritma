#include <iostream>
using namespace std;

int toplama(int sayi)
{
    if (sayi == 0)
    {
        return 0;
    }
    else
    {
        return sayi + toplama(sayi - 1);
    }
}

int main()
{
    int sayi;
    cout << "Bir Sayi Girin: ";
    cin >> sayi;
    std::cout << "Toplam = " << toplama(sayi) << endl;
    return 0;
}


