#include <cstdlib>
#include <iostream>
#define N 50

using namespace std;

int main(int argc, char * argv[]) {
    int tab[N];
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        tab[i] = rand() % 100;
        cout << tab[i] << endl;
    }
    cout << "\n\n\n";
    int k;
    for (int i = 0; i < N; i++) {
        k = i;
        for (int j = i + 1; j < N; j++)
            if (tab[j] < tab[k])
                k = j;

        int tmp = tab[k];
        tab[k] = tab[i];
        tab[i] = tmp;
    }

    for (int i = 0; i < N; i++) {
        cout << tab[i] << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}