#include <iostream>

using namespace std;

int main() {
    struct uczen {
        string imie;
        int wiek;
    };

    uczen tab[5];

    tab[0].imie = "Adrian";
    tab[0].wiek = 17;
    tab[1].imie = "Mateusz";
    tab[1].wiek = 17;
    tab[2].imie = "Maciek";
    tab[2].wiek = 17;
    tab[3].imie = "Bartek";
    tab[3].wiek = 17;
    tab[4].imie = "Lukasz";
    tab[4].wiek = 18;

    uczen * wskaznik = & tab[0];

    for (int i = 0; i <= 5; i++)
        wskaznik += 1;
    cout << "Imie: " << ( * wskaznik).imie << ", wiek: " << ( * wskaznik).wiek << " lat" << endl;

    system("PAUSE");
    return (0);
}