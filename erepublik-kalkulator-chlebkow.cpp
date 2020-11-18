#include <cstdlib>

#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    double chlebek[4], cena[4], ilosc_zycia;

    cout << "Podaj cene chlebka(2): ";
    cin >> cena[0];
    cout << "Podaj cene chlebka(4): ";
    cin >> cena[1];
    cout << "Podaj cene chlebka(6): ";
    cin >> cena[2];
    cout << "Podaj cene chlebka(8): ";
    cin >> cena[3];
    cout << "Podaj cene chlebka(10): ";
    cin >> cena[4];
    cout << "Ile zycia chcesz zregenerowac? ";
    cin >> ilosc_zycia;
    cout << endl;
    cout << "Musisz kupic " << ilosc_zycia / 2 << " chlebka(2) za " << cena[0] * (ilosc_zycia / 2) << endl;
    cout << "Musisz kupic " << ilosc_zycia / 4 << " chlebka(4) za " << cena[1] * (ilosc_zycia / 4) << endl;
    cout << "Musisz kupic " << ilosc_zycia / 6 << " chlebka(6) za " << cena[2] * (ilosc_zycia / 6) << endl;
    cout << "Musisz kupic " << ilosc_zycia / 8 << " chlebka(8) za " << cena[3] * (ilosc_zycia / 8) << endl;
    cout << "Musisz kupic " << ilosc_zycia / 10 << " chlebka(410) za " << cena[4] * (ilosc_zycia / 10) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}