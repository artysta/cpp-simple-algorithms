#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    int tab[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    int n, i = 0;
    cout << "Podaj n: ";
    cin >> n;

    do {
        tab[i] = n % 2;
        n /= 2;
        i++;
    } while (n != 0);
    cout << endl << "System binarny: ";
    for (int j = i - 1; j >= 0; j--)
        cout << tab[j];
    cout << endl << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}