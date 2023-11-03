#include <iostream>

class Ogrenci
{
public:
    int yas;
    float ort;
    int sinif;
    std::string ad;
};

void ogr1Bilgiler()
{
    Ogrenci ogr1;
    ogr1.yas = 18;
    ogr1.ort = 2.8;
    ogr1.sinif = 3;
    ogr1.ad = "Ahmet";
    std::cout << "\nOgrencinin " << "Adi: " << ogr1.ad << "\nOrtalamasi: " << ogr1.ort << "\nSinifi: " << ogr1.sinif << "\nYasi: " << ogr1.yas << std::endl;
}
void ogr2Bilgiler()
{
    Ogrenci ogr2;
    ogr2.yas = 19;
    ogr2.ort = 3.5;
    ogr2.sinif = 2;
    ogr2.ad = "Selim";
    std::cout << "\nOgrencinin " << "Adi: " << ogr2.ad << "\nOrtalamasi: " << ogr2.ort << "\nSinifi: " << ogr2.sinif << "\nYasi: " << ogr2.yas << std::endl;
}
void ogr3Bilgiler()
{
    Ogrenci ogr3;
    ogr3.yas = 22;
    ogr3.ort = 3.2;
    ogr3.sinif = 4;
    ogr3.ad = "Ali";
    std::cout << "\nOgrencinin " << "Adi: " << ogr3.ad << "\nOrtalamasi: " << ogr3.ort << "\nSinifi: " << ogr3.sinif << "\nYasi: " << ogr3.yas << std::endl;
}
void ogr4Bilgiler()
{
    Ogrenci ogr4;
    ogr4.yas = 21;
    ogr4.ort = 2.9;
    ogr4.sinif = 2;
    ogr4.ad = "Mustafa";
    std::cout << "\nOgrencinin " << "Adi: " << ogr4.ad << "\nOrtalamasi: " << ogr4.ort << "\nSinifi: " << ogr4.sinif << "\nYasi: " << ogr4.yas << std::endl;
}


int main()
{
    int secenek;
    std::cout << "Kacinci ogrencinin bilgilerini goruntulemek istersiniz (1/2/3/4)" << std::endl;
    std::cin >> secenek;
    switch(secenek)
    {
        case 1:
            ogr1Bilgiler();
            break;

        case 2:
            ogr2Bilgiler();
            break;

        case 3:
            ogr3Bilgiler();
            break;
        case 4:
            ogr4Bilgiler();
            break;

        default:
            std::cout << "Dogru bir giris yapmadiniz" << std::endl;
    }
    return 0;
}

