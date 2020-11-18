#include <cstdlib>
#include <iostream>

#define MAX 200

using namespace std;

int main(int argc, char * argv[]) {
    int tab[MAX];
    srand(time(NULL));
    j

    for (int i = 0; i < MAX; i++) {
        tab[i] = rand() % 1000;
    }

    //sortowanie

    int elem, k;

    for (int i = 0; i < MAX; i++) {
        elem = tab[i];
        k = i - 1;

        while ((k >= 0) && (tab[k] > elem)) {
            tab[k + 1] = tab[k];
            k--;
        } //while
        tab[k + 1] = elem;
    } //for
    //koniec sortowania

    for (int i = 0; i < MAX; i++) {
        cout << tab[i] << endl;
    }
    cout << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}