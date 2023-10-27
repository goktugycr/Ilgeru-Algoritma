#include <iostream>
int sayiAl();
bool asalKontrol();
void ekranaBas();
int sayi;

int main()
{
    sayiAl();
    asalKontrol();
    ekranaBas();
}

int sayiAl()
{
    std::cout << "Bir sayi giriniz" << std::endl;
    std::cin >> sayi;
    return sayi;
}

bool asalKontrol()
{
    if (sayi <= 1) return false;

    for (int i = 2; i <= sayi / 2; i++)
    {
        if (sayi % i == 0)
        {
            return false;
        }
    }
    return true;
}

void ekranaBas()
{
    if (asalKontrol() == false)
    {
        std::cout << "Sayi asal degildir";
    }
    else
        std::cout << "Sayi asaldir";

}

