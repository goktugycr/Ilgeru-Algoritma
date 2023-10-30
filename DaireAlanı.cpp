#include <iostream>
#include <cmath>
float yaricapAl();
void alanHesapla();
float yaricap;
float alan;
const double PI = 3.14159265358979323846;


int main()
{
    yaricapAl();
    alanHesapla();
}

float yaricapAl()
{
    std::cout << "Lutfen dairenin yaricapini giriniz" << std::endl;
    std::cin >> yaricap;
    return yaricap;
}

void alanHesapla()
{
    alan = PI * pow(yaricap, 2);
    std::cout << "Alan: " << alan << std::endl;
}

