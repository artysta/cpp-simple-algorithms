#include <cstdlib>
#include <iostream>

using namespace std;

void potega(double * x, int n) {
    double tmp = * x;

    for (int i = 1; i < n; i++) {
        tmp *= ( * x);
    }
    * x = tmp;
}

int main(int argc, char * argv[]) {
    double x = 2; // jaka liczba
    int n = 3; // do ktorej potegi
    potega( & x, n);
    cout << x << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}