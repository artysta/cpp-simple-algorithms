#include <cstdlib>
#include <iostream>
#define N 5
#define M 5

using namespace std;

void generuj(int tab2[][N], int lw, int lk) {
    for (int i = 0; i < lw; i++) {
        for (int j = 0; j < lk; j++) {
            tab2[i][j] = rand() % 10;
            cout << tab2[i][j] << "\t";
        }
        cout << endl;
    }

}
void minmax(int tab2[][N], int min, int max) {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tab2[i][j] < min) {
                min = tab2[i][j];
            }
            if (tab2[i][j] > max) {
                max = tab2[i][j];
            }

        }

    }
    cout << "Max: " << max << "   Min: " << min << endl;
}
int main(int argc, char * argv[]) {
    srand(time(NULL));
    int tab2[N][M];
    generuj(tab2, N, M);
    int min = tab2[0][0];
    int max = tab2[0][0];
    minmax(tab2, min, max);
    system("PAUSE");
    return EXIT_SUCCESS;
}