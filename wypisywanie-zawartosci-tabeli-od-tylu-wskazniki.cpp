#include <iostream>
#include <conio.h>

int main() {
    using namespace std;
    int liczby[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int * wsk_liczby = liczby + 10;

    for (int i = 0; i < 10; i++) {
        wsk_liczby -= 1;
        cout << * wsk_liczby << endl;
    }
    getch();
    return 0;
}