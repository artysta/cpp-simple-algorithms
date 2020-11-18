#include <cstdlib>

#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    int tab[100], poszukiwana_liczba, tab2[100], s = 0, i, j = 0;
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 900 + 100;
        cout << tab[i] << endl;
    }
    cout << "Podaj poszukiwana liczbe: ";
    cin >> poszukiwana_liczba;
    cout << endl;
    i = 0;

    do {
        if (poszukiwana_liczba == tab[i]) {
            tab2[j] = i;
            s++;
            j++;
        }
        i++;
    } while (i != 100);

    cout << "Liczba " << poszukiwana_liczba << " wystepuje " << s << " raz(y), na pozycjach: ";
    for (i = 0; i < j; i++) {
        cout << tab2[i] << " ";
    }
    cout << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}