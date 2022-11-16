#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <vector>
#include "Clovek.h"

std::list<Clovek> nacti_lidi_vstup() {
    std::list<Clovek> lide;
    std::string dalsi_osoba = "n";
    do {
        std::cout << "Zadej jmeno: ";
        std::string jmeno;
        std::cin >> jmeno;

        std::cout << "Zadej prijmeni: ";
        std::string prijmeni;
        std::cin >> prijmeni;

        int vek;
        while (true) {
            std::cout << "Kolik Vam je? ";
            std::cin >> vek;

            if (vek > 0 && vek < 120) {
                break;
            }
            std::cout << "Vek je nerealny \n";
        }

        float vyska;
        while (true) {
            std::cout << "Jak jste vysoky/a? (V cm) ";
            std::cin >> vyska;

            if (vyska < 220 && vyska > 60) {
                break;
            }
            std::cout << "Vyska je nerealna \n";
        }

        std::string vzdelani;
        while (true) {
            std::cout << "Zadej vzdelani (zs, ss, vs): ";
            
            std::cin >> vzdelani;

            if(vzdelani == "zs" || vzdelani == "ss" || vzdelani == "vs"){
                break;
            }
            
            std::cout << "Neplatne vzdelani \n";
        }

        Clovek c = Clovek(jmeno, prijmeni, vek, vyska, vzdelani);

        lide.push_back(c);

        std::cout << "Checete zadat dalsi osobu? a - ano, n - ne \n";
        std::cin >> dalsi_osoba;
    } while (dalsi_osoba == "a");
    lide.sort();
    return lide;
}

void uloz_soubor(std::list<Clovek> lide) {
    std::ofstream soubor;
    soubor.open("lide.txt");
    for (auto const& i : lide) {
        soubor << (std::string) i << "\n";
    }
    soubor.close();
}

std::list<Clovek> nacti_lidi_soubor(std::string jmeno_souboru) {
    std::list<Clovek> lide;
    std::string radek;
    std::ifstream soubor;
    soubor.open(jmeno_souboru);
    if (soubor.good()) {
        while (getline(soubor, radek)) {
            std::vector<std::string> rozdeleny_radek;
            std::string delimiter = ", ";
            size_t pos = 0;
            std::string token;
            std::string s = radek;
            while ((pos = s.find(delimiter)) != std::string::npos) {
                token = s.substr(0, pos);
                rozdeleny_radek.push_back(token);
                s.erase(0, pos + delimiter.length());
            }
            rozdeleny_radek.push_back(s);
            lide.push_back(Clovek(rozdeleny_radek[0], rozdeleny_radek[1], std::stoi(rozdeleny_radek[2]), std::stof(rozdeleny_radek[3]), rozdeleny_radek[4]));
        }
    }
    soubor.close();
    return lide;
}

int main() {
    std::list<Clovek> lide;
    lide = nacti_lidi_soubor("lide.txt");
    if (lide.size() == 0) {
        lide = nacti_lidi_vstup();
    }
    std::cout << "Lide: \n";
    for (auto const& i : lide) {
        std::cout << (std::string) i << "\n";
    }
    uloz_soubor(lide);
    return 0;
}
