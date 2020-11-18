#include <cstdlib>
#include <iostream>
#define N 10

using namespace std;

void generuj(int tab[], int n, int p, int k) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % (k - p + 1) + p; //losuje liczby z zakresu od "p" do "k", w tym przypadku od 100 do 110
    }
}
int main(int argc, char * argv[]) {
    int tab[N];
    generuj(tab, N, 100, 110);

    for (int i = 0; i < N; i++)
        cout << tab[i] << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}