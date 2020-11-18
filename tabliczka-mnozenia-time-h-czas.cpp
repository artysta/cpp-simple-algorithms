#include <time.h>
#include <iostream>

using namespace std;

int main() {

    time_t start, koniec;
    int rozwiazanie, a, b, bledy = 0;
    double roznica;

    time( & start);
    for (int i = 0; i < 10; i++) {
        srand(time(NULL));
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << "Ile to " << a << " * " << b << endl;
        do {
            cin >> rozwiazanie;
            if (rozwiazanie != a * b) {
                bledy++;
            }
        } while (rozwiazanie != a * b);

    }
    cout << "Liczba bledow: " << bledy << endl;
    time( & koniec);
    roznica = difftime(koniec, start);
    cout << "Obliczenia zajely Ci: " << roznica << " sekund";

    system("PAUSE");
    return EXIT_SUCCESS;
}