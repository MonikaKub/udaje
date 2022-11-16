#ifndef CLOVEK_H
#define CLOVEK_H
#include <string>

class Clovek
{
    public:
        std::string jmeno;
        std::string prijmeni;
        int vek;
        float vyska;
        std::string vzdelani;
        Clovek(std::string jmeno, std::string prijmeni, int vek, float vyska, std::string vzdelani);
        bool operator < (const Clovek& clovek);
        bool operator > (const Clovek& clovek);
        std::string to_string(const Clovek&);
        operator std::string() const;
        virtual ~Clovek();

    protected:

    private:
};

#endif // CLOVEK_H
