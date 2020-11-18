#include <cstdlib>
#include <iostream>

using namespace std;

int wyznacznik(double a1, double a2, double b1, double b2, double c1, double c2, double * w, double * w1, double * w2) {
    ( * w) = (a1 * b2) - (b1 * a2);
    ( * w1) = (c1 * b2) - (b1 * c2);
    ( * w2) = (a1 * c2) - (c1 * a2);

    cout << "w = " << * w << endl;
    cout << "w1 = " << * w1 << endl;
    cout << "w2 = " << * w2 << endl;

    if (( * w) != 0) {
        cout << "Rownanie mozna obliczyc." << endl;
        return 0;
    }

    if (( * w) == 0 && ( * w1) == 0 && ( * w2) == 0) {
        cout << "Uklad rownan posiada nieskonczenie wiele rozwiazan." << endl;
        return 1;
    }

    if (( * w) == 0 && ( * w1) != 0 && ( * w2) != 0) {
        cout << "Uklad rownan sprzeczny" << endl;
        return 2;
    }
    //return 0; mozna obliczyc
    //return 1; nieskończenie wiele rozwiązań
    //return 2; sprzeczny
}

int main(int argc, char * argv[]) {
    double a1 = 3, a2 = 3, b1 = 1, b2 = 1, c1 = 6, c2 = 7, w, w1, w2;
    wyznacznik(a1, a2, b1, b2, c1, c2, & w, & w1, & w2);

    system("PAUSE");
    return EXIT_SUCCESS;
}