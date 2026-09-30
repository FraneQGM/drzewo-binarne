#include <iostream>

using namespace std;

// struktura drzewa
class drzewo
{
public:
    struct wezel
    {
        int liczba;
        wezel *l, *p;
    };

    wezel *korzen;

    //konstruktor
    drzewo(){
        korzen = NULL;
    }

    // funkcja od wstawiania danych do drzewa
    void dodaj(int x)
    {
        wezel **d = &korzen;

        while (*d != NULL)
        {
            if (x < (*d)->liczba)
                d = &((*d)->l);
            else
                d = &((*d)->p);
        }

        *d = new wezel;
        (*d)->liczba = x;
        (*d)->l = NULL;
        (*d)->p = NULL;
    }

    // funkcja do wypisywania danych
    void wypisz(wezel *d)
    {
        if (d != NULL)
        {
            wypisz(d->l);
            cout << d->liczba << " ";
            wypisz(d->p);
        }
    }

    // funkcja do usuwania drzewa
    void usun(wezel *d)
    {
        if (d != NULL)
        {
            usun(d->l);
            usun(d->p);
            delete d;
        }
    }

    // destruktor
    ~drzewo(){
        usun(korzen);
    }
};

int main()
{
    drzewo d;

    int liczby[] = {5, 2, 8, 1, 4, 7, 9};

    for (int i = 0; i < 7; i++)
    {
        d.dodaj(liczby[i]);
    }

    cout << "Posortowane: ";
    d.wypisz(d.korzen);

    return 0;
}
