#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(int argc, char *
    const argv[]) {
    string liczba;
    cout << "Podaj liczbe binarna: ";
    cin >> liczba;
    int suma = 0;

    for (int i = liczba.length() - 1; i >= 0; i--) {
        suma += (int)(liczba[i] - '0') * pow(2, liczba.length() - 1 - i);
    }

    cout << "Wartosc dziesiatkowa: " << suma;

    return 0;
}