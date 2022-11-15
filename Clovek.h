#ifndef CLOVEK_H
#define CLOVEK_H
#include <string>

class Clovek
{
    public:
//        string jmeno, string prijmeni;
        Clovek();
        int vek() const;
        void vypisInfo() const;
        virtual ~Clovek();

    protected:

    private:
};

#endif // CLOVEK_H
