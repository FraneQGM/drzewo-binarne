Drzewo BST w C++

Prosty projekt w języku C++ przedstawiający implementację binarnego drzewa poszukiwań (BST – Binary Search Tree).

Opis projektu

Program tworzy binarne drzewo poszukiwań, dodaje do niego określone liczby, a następnie wypisuje je w kolejności rosnącej.

W projekcie wykorzystano klasę drzewo, która obsługuje:

dodawanie elementów do drzewa,

przechodzenie drzewa metodą in-order,

usuwanie wszystkich elementów drzewa,

automatyczne zwalnianie pamięci za pomocą destruktora.

Struktura drzewa

Dla przykładowych danych:

5, 2, 8, 1, 4, 7, 9


powstaje następujące drzewo:

        5
       / \
      2   8
     / \ / \
    1  4 7  9

Działanie programu

Elementy są dodawane zgodnie z zasadami BST:

wartości mniejsze od węzła trafiają do lewego poddrzewa,

wartości większe lub równe trafiają do prawego poddrzewa.

Do wypisania elementów wykorzystano przejście in-order:

lewe poddrzewo → węzeł → prawe poddrzewo


Dzięki temu elementy zostają wypisane w kolejności rosnącej.

Przykładowy wynik
Posortowane: 1 2 4 5 7 8 9

Technologie

C++

Standardowa biblioteka iostream

Dynamiczna alokacja pamięci (new / delete)

Binarne drzewo poszukiwań (BST)

Uruchomienie
1. Sklonowanie repozytorium
git clone https://github.com/TWOJ_LOGIN/NAZWA_REPO.git
cd NAZWA_REPO

2. Kompilacja

Jeżeli plik nazywa się main.cpp:

g++ main.cpp -o program

3. Uruchomienie

Linux / macOS:

./program


Windows:

program.exe

Główne funkcje
dodaj(int x)

Dodaje nową liczbę do drzewa BST.

void dodaj(int x)

wypisz(wezel *d)

Wypisuje elementy drzewa metodą in-order.

void wypisz(wezel *d)

usun(wezel *d)

Usuwa wszystkie węzły drzewa i zwalnia zajętą pamięć.

void usun(wezel *d)

Destruktor

Destruktor klasy automatycznie usuwa całe drzewo po zakończeniu działania programu:

~drzewo()
{
    usun(korzen);
}

Uwagi

Program jest przykładową implementacją BST przeznaczoną przede wszystkim do nauki działania drzew binarnych, wskaźników oraz dynamicznego zarządzania pamięcią w C++.
