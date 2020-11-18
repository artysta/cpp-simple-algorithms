#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
    fstream plik, plik2;
    string tekst, s1, s2;

    cout << "Podaj sciezke do 1 pliku: ";
    cin >> s1;
    cout << "Podaj sciezke do 2 pliku: ";
    cin >> s2;
    cout << "Podaj klucz: ";
    int k;
    cin >> k;

    plik.open(s1.c_str(), ios:: in );
    plik2.open(s2.c_str(), ios::out);

    while (!plik.eof()) {
        getline(plik, tekst);


        for (int i = 0; i < tekst.length(); i++) {
            if ((tekst[i] >= 'A') && (tekst[i] <= 'Z'))

            {
                tekst[i] = (char)(65 + (tekst[i] - (65 - k)) % 26);
            }

            if ((tekst[i] >= 'a') && (tekst[i] <= 'z')) {
                tekst[i] = (char)(97 + (tekst[i] - (97 - k)) % 26);
            }

        }

    }

    plik2 << tekst << endl;

    plik.close();
    plik2.close();

    cout << "Zakonczono!" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}