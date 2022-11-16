#include "Clovek.h"
#include <string>
#include <iostream>

Clovek::Clovek(std::string jmeno, std::string prijmeni, int vek, float vyska, std::string vzdelani): 
jmeno(jmeno), prijmeni(prijmeni), vek(vek), vyska(vyska), vzdelani(vzdelani){}

bool Clovek::operator < (const Clovek& clovek) {
    if (prijmeni != clovek.prijmeni) {
        return prijmeni < clovek.prijmeni;
    }
    
    return jmeno < clovek.jmeno;
}

bool Clovek::operator > (const Clovek& clovek) {
    if (prijmeni != clovek.prijmeni) {
        return prijmeni > clovek.prijmeni;
    }
    
    return jmeno > clovek.jmeno;
}

Clovek::operator std::string() const {
    return prijmeni + ", " + jmeno + ", " + std::to_string(vek) + ", " + std::to_string(vyska)  + ", " + vzdelani;
}

std::string Clovek::to_string(const Clovek& clovek) {
    return (std::string) clovek;
}
Clovek::~Clovek(){}
