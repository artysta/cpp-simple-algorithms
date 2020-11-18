#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    int l = 0;
    srand(time(NULL));
    int los[6] = { 0, 0, 0, 0, 0, 0 };
    int tmp;

    do {
        tmp = rand() % 48 + 1;
        try {
            for (int i = 0; i < l; i++)
                if (tmp == los[i])
                    throw 10;
            los[l] = tmp;
            l++;
        } catch (int e) {
            cout << "Powtorka" << endl;
        }
    } while (l != 6);

    for (int i = 0; i < 6; i++)
        cout << los[i] << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}