#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int element(int n) {
    if (n == 0) return 0;
    if (n % 2 == 0)
        return (element(n / 2) * (-1));
    else
        return (element(n / 2) + 1);
}
int main(int argc, char * argv[]) {
    for (int i = 0; i < 100; i++)
        cout << element(i) << " ";

    int baza = 750;
    double wsp = 1.06;

    for (int i = 0; i < 100; i++)
        Beep(element(i) * wsp * baza, 200);

    system("PAUSE");
    return EXIT_SUCCESS;
}