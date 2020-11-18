#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    cout << "Podaj wyraz: ";
    string tekst;
    cin >> tekst;
    cout << "Podaj klucz: ";
    int k;
    cin >> k;

    for (int i = 0; i < tekst.length(); i++) {
        if ((tekst[i] >= 'A') && (tekst[i] <= 'Z'))

        {
            tekst[i] = (char)(65 + (tekst[i] - (65 - k)) % 26);
        }
        if ((tekst[i] >= 'a') && (tekst[i] <= 'z')) {
            tekst[i] = (char)(97 + (tekst[i] - (97 - k)) % 26);
        }
    }
    cout << "Zaszyfrowane: \n" << tekst << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}