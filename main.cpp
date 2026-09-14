#include <iostream>

using namespace std;

struct drzewo
{
    int liczba;
    struct drzewo *l, *p;
};

void wstaw(drzewo *&d, int x)
{
    if (d == NULL)
    {
        d = new drzewo;
        d->liczba = x;
        d->l = NULL;
        d->p = NULL;
    }
    else
    {
        if (x < d->liczba)
            wstaw(d->l, x);
        else
            wstaw(d->p, x);
    }
}

void wypisz(drzewo *d)
{
    if (d != NULL)
    {
        wypisz(d->l);
        cout << d->liczba << " ";
        wypisz(d->p);
    }
}

int main()
{
    drzewo *d = NULL;

    int liczby[] = {5, 2, 8, 1, 4, 7, 9};

    for (int i = 0; i < 7; i++)
    {
        wstaw(d, liczby[i]);
    }

    cout << "Posortowane: ";
    wypisz(d);

    return 0;
}
