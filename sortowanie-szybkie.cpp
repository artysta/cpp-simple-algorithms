#include <cstdlib>
#include <iostream>
#define N 20

using namespace std;

void quicksort(int tab[], int left, int right) {
    int i = left;
    int j = right;
    int x = tab[(left + right) / 2];
    do {
        while (tab[i] < x) i++;
        while (tab[j] > x) j--;
        if (i <= j) {
            int temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);
    if (left < j) quicksort(tab, left, j);
    if (right > i) quicksort(tab, i, right);
}


int main(int argc, char * argv[]) {
    srand(time(NULL));
    int tab[N];

    for (int i = 0; i < N; i++) {
        tab[i] = rand() % 100;
        cout << tab[i] << endl;
    }

    quicksort(tab, 0, N - 1);
    cout << endl;

    for (int i = 0; i < N; i++) {
        cout << tab[i] << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}