#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
    int wybor, dlugosc, rodzaj, wielkosc_los;
    char wielkosc;
    srand(time(NULL));

    cout << "\t >>Generator hasel v.1<<" << endl;
    cout << "1.Generuj haslo skladajace sie z cyfr." << endl;
    cout << "2.Generuj haslo skladajace sie z liter." << endl;
    cout << "3.Generuj haslo skladajace sie z liter i cyfr." << endl;
    cout << "> ";
    cin >> wybor;
    cout << endl;
    cout << "Podaj dlugosc hasla: " << endl;
    cout << "> ";
    cin >> dlugosc;
    cout << endl;
    int haslo[dlugosc];
    if (wybor == 1) {
        cout << endl << "Wygenerowane haslo: ";
        for (int i = 0; i < dlugosc; i++) {
            haslo[i] = rand() % 10;
            cout << haslo[i];
        }
        cout << endl;
    } else if (wybor == 2) {
        cout << "Czy brac pod uwage wielkosc liter? (t/n)" << endl;
        cout << "> ";
        cin >> wielkosc;
        cout << endl << "Wygenerowane haslo: ";
        for (int i = 0; i < dlugosc; i++) {
            if (wielkosc == 't') {
                wielkosc_los = rand() % 2;
                if (wielkosc_los == 0) {
                    haslo[i] = rand() % 26 + 97;
                    cout << (char) haslo[i];
                } else {
                    haslo[i] = rand() % 26 + 65;
                    cout << (char) haslo[i];
                }
            } else {
                haslo[i] = rand() % 26 + 97;
                cout << (char) haslo[i];
            }
        }
        cout << endl;
    } else if (wybor == 3) {
        cout << "Czy brac pod uwage wielkosc liter? (t/n)" << endl;
        cout << "> ";
        cin >> wielkosc;
        cout << endl << "Wygenerowane haslo: ";
        for (int i = 0; i < dlugosc; i++) {
            rodzaj = rand() % 2;
            if (rodzaj == 0) {
                if (wielkosc == 't') {
                    wielkosc_los = rand() % 2;
                    if (wielkosc_los == 0) {
                        haslo[i] = rand() % 26 + 97;
                        cout << (char) haslo[i];
                    } else {
                        haslo[i] = rand() % 26 + 65;
                        cout << (char) haslo[i];
                    }
                } else {
                    haslo[i] = rand() % 26 + 97;
                    cout << (char) haslo[i];
                }
            }
            if (rodzaj == 1) {
                haslo[i] = rand() % 10;
                cout << haslo[i];
            }
        }
    }

    cout << endl << endl;

    fstream plik;
    ofstream out("haslo.txt");

    plik.open("haslo.txt", ios:: in | ios::out);

    for (int i = 0; i < dlugosc; i++)
        plik << (char) haslo[i];

    plik.close();



    system("PAUSE");
    return EXIT_SUCCESS;
}