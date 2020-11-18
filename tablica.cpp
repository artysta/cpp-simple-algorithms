#include <cstdlib>
#include <iostream>

using namespace std;

struct lista {
    int dane;
    lista * next;
};

lista * pointer = NULL; //ostatnio dodany do listy element
lista * tmp;
lista * first = NULL; //pierwszy element

void dodaj_element(int dodaj) {
    tmp = new lista;
    tmp - > dane = dodaj;
    tmp - > next = NULL;

    if (pointer == NULL)
        first = tmp;
    else
        pointer - > next = tmp;

    pointer = tmp;
}

void dodaj_element2(int dodaj) {
    tmp = new lista;
    tmp - > dane = dodaj;
    tmp - > next = NULL;
    if (first == NULL)
        first = tmp;
    else {
        tmp - > next = first;
        first = tmp;
    }
}

void wypisz() {
    cout << endl << "Wprowadzone dane: " << endl;
    tmp = first;
    while (tmp != NULL) {
        cout << tmp - > dane << " ";
        tmp = tmp - > next;
    }
}

int main(int argc, char * argv[]) {
    cout << "Wprowadzanie danych" << endl;
    int l = 0;
    while (l < 5) {
        int liczba;
        cin >> liczba;
        dodaj_element(liczba);
        l++;
    }
    wypisz();
    cout << endl << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}