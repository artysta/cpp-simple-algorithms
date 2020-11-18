#include <iostream>
#include <math.h>
#include <cstdlib>

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
    wynik = pow(pow(w.k.x - w.p.x, 2) + pow(w.k.y - w.p.y, 2), 0.5);
    return wynik;
}

int main(int argc, char *
    const argv[]) {

    wektor w1, w2, w3;

    w1.p.x = 0;
    w1.p.y = 0;
    w1.k.x = 1;
    w1.k.y = 1;

    w2.p.x = 0;
    w2.p.y = 0;
    w2.k.x = 1;
    w2.k.y = 1;

    w2.p.x += (w1.k.x - w1.p.x);
    w2.p.y += (w1.k.y - w1.p.y);
    w2.k.x += (w1.k.x - w1.p.x);
    w2.k.y += (w1.k.y - w1.p.y);

    w3.p.x = w1.p.x;
    w3.p.y = w1.p.y;
    w3.k.x = w2.k.x;
    w3.k.y = w2.k.y;

    cout << dlugoscwektora(w3) << "\n";

    system("PAUSE");
    return 0;
}