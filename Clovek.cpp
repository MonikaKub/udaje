#include "Clovek.h"
#include <string>
#include <iostream>

Clovek::Clovek()
{
    std::cout << "Tve jmeno: ";
    std::string jmeno;
    std::cin >> jmeno;
    std::cout << "Tve prijmeni: ";
    std::string prijmeni;
    std::cin >> prijmeni;

    vekznovu:
    std::cout << "Vek: ";
    int vek;
    std::cin >> vek;

    vzdelaniznovu:
    std::string zs;
    std::string ss;
    std::string vs;
    std::cout <<"Zadej vzdelani (zs, ss, vs): ";
    std::string vzdelani;
    std::cin >>vzdelani;

    vyskaznovu:
    std::cout <<"Jak jste vysoky/a? (V cm) ";
    double vyska;
    std::cin >>vyska;

}

Clovek::~Clovek()
{
    //dtor
}
