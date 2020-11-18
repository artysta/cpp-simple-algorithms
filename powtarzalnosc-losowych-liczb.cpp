#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    int poszukiwana_liczba = 0, licznik = 0, zakres, ilosc;
    srand(time(NULL));

    cout << "Podaj zakres lowania liczb, od 0 do: ";
    cin >> zakres;

    cout << "Podaj ilosc liczb jaka ma zostac wylosowana: ";
    cin >> ilosc;

    int tab[ilosc];

    for (int i = 0; i < ilosc; i++) {
        tab[i] = rand() % zakres + 1;
        cout << tab[i] << endl;
    }
    cout << endl << "Podaj szukana liczbe: ";
    cin >> poszukiwana_liczba;

    for (int i = 0; i < ilosc; i++) {
        if (tab[i] == poszukiwana_liczba) {
            licznik++;
        }
    }

    cout << "Liczba " << poszukiwana_liczba << " wystepuje " << licznik << " raz(y)." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}