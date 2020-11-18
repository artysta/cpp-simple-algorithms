#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
    double liczba[100], suma = 0, tmp = 0, mediana = 0;
    int i = 0, k = 0;
    fstream plik, plik2;
    string linia;
    plik.open("C:/Dev-Cpp/plik.txt", ios:: in );

    while (!plik.eof()) {
        plik >> liczba[i];
        i++;
    }
    plik.close();

    double max = liczba[0], min = liczba[0];

    cout << "Liczby nieposortowane:" << endl;
    for (int j = 0; j < i; j++) {
        cout << liczba[j] << endl;
    }

    for (int j = 0; j < i; j++) //max
    {
        if (liczba[j] > max)
            max = liczba[j];
    }

    for (int j = 0; j < i; j++) //min
    {
        if (liczba[j] < min)
            min = liczba[j];
    }
    for (int j = 0; j < i; j++) //srednia
    {
        suma += liczba[j];
    }

    for (int j = i - 1; j > 0; j--) //sortowanie (bąbelkowe)
    {
        for (int i = 0; i < j; i++) {
            if (liczba[i] > liczba[i + 1]) {
                tmp = liczba[i];
                liczba[i] = liczba[i + 1];
                liczba[i + 1] = tmp;
            }
        }

        if (i % 2 == 0) //mediana
            mediana = (liczba[(i - 1) / 2] + liczba[((i - 1) / 2) + 1]) / 2;
        else
            mediana = liczba[i / 2];

    }


    cout << endl << "Liczby posortowane:" << endl;
    for (int j = 0; j < i; j++) {
        cout << liczba[j] << endl;
    }

    cout << endl << "Wartosc minimalna:" << endl << min << endl;
    cout << endl << "Wartosc maksymalna:" << endl << max << endl;
    cout << endl << "Srednia:" << endl << suma / i << endl << endl;
    cout << endl << "Mediana:" << endl << mediana << endl << endl;

    plik2.open("C:/Dev-Cpp/plik2.txt", ios:: in | ios::out);

    for (int j = 0; j < i; j++) {
        plik2 << liczba[j] << endl;
    }

    plik2.close();

    system("PAUSE");
    return EXIT_SUCCESS;
}