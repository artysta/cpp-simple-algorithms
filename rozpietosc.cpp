#include <cstdlib>
#include <iostream>
#define N 20

using namespace std;

int generuj(int pocz, int kon) {
    return (rand() % (kon - pocz + 1) + pocz);
}

void wypelnij_tablice(int tab[], int pocz, int kon) {
    for (int i = 0; i < N; i++) {
        tab[i] = generuj(pocz, kon);
    }
}

void wypisz_tablice(int tab[]) {
    for (int i = 0; i < N; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int znajdz_rozpietosc(int tab[]) {

    int max = tab[0];
    int min = tab[0];

    for (int i = 0; i < N; i++) {
        if (tab[i] > max)
            max = tab[i];

        if (tab[i] < min)
            min = tab[i];
    }
    return (max - min);
}

int main(int argc, char * argv[]) {
    srand(time(NULL));
    int t1[N];
    wypelnij_tablice(t1, 10, 99);
    wypisz_tablice(t1);
    znajdz_rozpietosc(t1);
    cout << "Rozpietosc: " << znajdz_rozpietosc(t1) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}