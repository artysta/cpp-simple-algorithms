#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

void pierwiastek(double a, double b, double c, double & x1, double & x2) {
    double d;
    d = (b * b) - 4 * a * c;

    cout << "Delta = " << d << endl;

    if (d == 0) {
        x1 = (-b) / (2 * a);
        x2 = (-b) / (2 * a);
        cout << "x0 = " << x1 << endl;
    }

    if (d > 0) {
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    if (d < 0) {
        cout << "Delta mniejsza niz zero! Nie ma rozwiazania." << endl;
    }
}

int main(int argc, char * argv[]) {
    double a = 1, b = -2, c = 100, x1, x2;
    pierwiastek(a, b, c, x1, x2);

    system("PAUSE");
    return EXIT_SUCCESS;
}