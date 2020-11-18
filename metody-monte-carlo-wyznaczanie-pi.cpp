#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    int n;
    int nk = 0;
    double x, y;
    double s;

    srand(time(NULL));

    cout << "Liczba kropel: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        x = ((double) rand() / (RAND_MAX)) * 2 - 1;
        y = ((double) rand() / (RAND_MAX)) * 2 - 1;

        if ((x * x + y * y) <= 1)
            nk++;
    }

    cout << n << endl;
    cout << nk << endl;
    s = 4 * (double) nk / n;
    cout << "pi= " << s << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}