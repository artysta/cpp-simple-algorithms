#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    char tab[100], ;
    int t;
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        t = rand() % 2;
        if (t == 1) {
            char z = (char)(rand() % 26 + 97);
            tab[i] = z;
        } else {
            char z = (char)(rand() % 26 + 65);
            tab[i] = z;
        }
    }

    for (int j = 99; j > 0; j--) {
        for (int i = 0; i < j; i++) {
            if ((int) tab[i] > (int) tab[i + 1]) {
                char tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        cout << tab[i] << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}