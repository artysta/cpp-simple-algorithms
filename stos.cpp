#include <cstdlib>
#include <iostream>

using namespace std;

struct element {
    double w;
    element * n;
};

element * stos = NULL;
element * tmp = NULL;

void push(double wartosc) {
    tmp = new element;
    tmp - > w = wartosc;
    tmp - > n = NULL;

    if (stos == NULL)
        stos = tmp;
    else {
        tmp - > n = stos;
        stos = tmp;
    }
}

double pop() {
    double temp;
    temp = stos - > w;
    tmp = stos;
    stos = tmp - > n;
    delete tmp;
    return temp;
}

int main(int argc, char * argv[]) {
    cout << "Podaj 3 wartosci do stosu: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ": ";
        double liczba;
        cin >> liczba;
        push(liczba);
    }

    cout << "Zdejmujemy" << endl;
    for (int i = 0; i < 3; i++)
        cout << pop() << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}