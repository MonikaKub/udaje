#include <iostream>
#include <fstream>
#include <string>
#include "Clovek.h"

int main() {
double vyska;
int vek;
char a;
char n;
std::string vzdelani;

    clovekZnovu:
    Clovek c = Clovek();

/*   if (c.vek < 0 && c.vek > 120) {
        std::cout << "Rekord ""\n";
        goto c.vekznovu; 
    }

    if(c.vzdelani != "zs" || c.vzdelani != "ss" || c.vzdelani != "vs") {
        std::cout << "Neplatny format, zadej znovu ""\n";
        goto c.vzdelaniznovu;
    }

    if (c.vyska > 220 && c.vyska < 60) {
        std::cout << "Vyska je nerealna ""\n";
        goto c.vyskaznovu;
    }
*/
    std::cout << "Chcete zadat dalsi osobu? 1 - ano, 2 - ne ""\n";
    char k;
    std::cin >> k;

    if (k != 2){
        goto clovekZnovu; // predelat na cyklus
    }

    return 0;
}
