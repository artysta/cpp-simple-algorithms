#include <time.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main() {

    time_t start, koniec;
    int rozwiazanie, a, b;
    double roznica;
    srand(time(NULL));
    time( & start);
    for (int i = 0; i < 10; i++) {
        a = rand() % 10;
        b = rand() % 10;
        cout << "Ile to " << a << " * " << b << endl;
        do {
            cin >> rozwiazanie;
        } while (rozwiazanie != a * b);
    }
    time( & koniec);
    roznica = difftime(koniec, start);
    cout << "\nGratulacja, poprawny wynik!\nObliczenia zajely Ci: " << roznica << " sekund";

    getch();
    return 0;
}