#include <cstdlib>
#include <iostream>

using namespace std;

void hanoi(int z, int d, int ile) {
    if (ile > 1) {
        hanoi(z, 6 - z - d, ile - 1);
        hanoi(z, d, 1);
        hanoi(6 - z - d, d, ile - 1);
    } else
        cout << z << " -> " << d << endl;
}

int main(int argc, char * argv[]) {

    int n;
    cout << "Podaj n: ";
    cin >> n;
    hanoi(1, 3, n);

    system("PAUSE");
    return EXIT_SUCCESS;
}