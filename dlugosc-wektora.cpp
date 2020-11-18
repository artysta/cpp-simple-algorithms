#include <iostream>
#include <math.h>

using namespace std;

struct Punkt {
    int x;
    int y;
};

struct wektor {
    Punkt p;
    Punkt k;
};

double dlugoscwektora(wektor w) {
    double wynik = 0.0;
    wynik = pow(pow(w.k.x - w.p.x, 2) + pow(w.k.y - w.p.y, 2), 1 / 2);
    return wynik;
}

int main(int argc, char *
    const argv[]) {

    wektor w1;

    w1.p.x = 0;
    w1.p.y = 0;
    w1.k.x = 1;
    w1.k.y = 1;

    cout << dlugoscwektora(w1) << "\n";

    system("PAUSE");
    return 0;
}