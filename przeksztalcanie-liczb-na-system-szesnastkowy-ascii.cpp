#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    int tab[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    int n, i = 0;
    cout << "Podaj n: ";
    cin >> n;

    do {
        tab[i] = n % 16;
        n /= 16;
        i++;
    } while (n != 0);
    cout << endl << "System szesnastkowy: ";
    for (int j = i - 1; j >= 0; j--) {
        if (tab[j] <= 9)
            cout << tab[j];
        else
            cout << (char)(55 + tab[j]);
    }
    cout << endl << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}