#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, d = 2;
    cout << "Podaj liczbe: ";
    cin >> n;
    do {
        while ((n % d) != 0)
            d++;
        cout << d << " " << endl;
        n /= d;
    }
    while (n != 1);
    system("PAUSE");
    return EXIT_SUCCESS;
}