#include <cstdlib>

#include <iostream>

using namespace std;

struct element {
    int d;
    element * n;
    element * p;
};

element * tmp;
element * pierwszy = NULL;
element * ostatni = NULL;

void push(int w) {
    tmp = new element;
    tmp - > d = w;
    if (pierwszy == NULL) {
        tmp - > n = NULL;
        tmp - > p = NULL;
        pierwszy = tmp;
        ostatni = tmp;
    } else {
        tmp - > p = ostatni;
        tmp - > n = NULL;
        ostatni - > n = tmp;
        ostatni = tmp;
    }
}

void display() {
    cout << "Wprowadzone dane: ";
    tmp = pierwszy;
    while (tmp != NULL) {
        cout << tmp - > d << "<->";
        tmp = tmp - > n;
    }
}

int main(int argc, char * argv[]) {
    for (int i = 0; i < 5; i++) {
        cout << "Podaj wartosc: " << endl;
        int el;
        cin >> el;
        push(el);
    }

    cout << "Koniec wprowadzania" << endl;
    display();

    system("PAUSE");
    return EXIT_SUCCESS;
}