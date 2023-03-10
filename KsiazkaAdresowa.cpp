#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMeneger.rejestracjaUzytkownika(); // dzialania na obiekcie a nie klasie
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMeneger.wypiszWszystkichUzytkownikow(); // dzialania na obiekcie a nie klasie
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMeneger.logowanieUzytkownika();
    if(uzytkownikMeneger.czyUzytkownikJestZalogowany())
    {
        uzytkownikMeneger.pobierzIdZalogowanegoUzytkownika();
        adresatMeneger.wczytajAdresatowZPliku(adresatMeneger.idZalogowanegoUzytkownika);
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMeneger.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMeneger.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMeneger.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMeneger.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wczytajAdresatowZPliku()
{
    adresatMeneger.wczytajAdresatowZPliku(uzytkownikMeneger.pobierzIdZalogowanegoUzytkownika());
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikMeneger.czyUzytkownikJestZalogowany();
}
