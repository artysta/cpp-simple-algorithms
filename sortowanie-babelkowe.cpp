#include <cstdlib>
#include <iostream>
#define MAX 100

using namespace std;

int main(int argc, char * argv[]) {
    int tab[MAX], i = 0, tmp;
    srand(time(NULL));

    for (int i = 0; i < MAX; i++) {
        tab[i] = rand() % 1000;
    }
    for (int j = MAX - 1; j > 0; j--) {
        for (int i = 0; i < j; i++) {
            if (tab[i] > tab[i + 1]) {
                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
            }
        }

    }
    for (int i = 0; i < MAX; i++) {
        cout << tab[i] << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}