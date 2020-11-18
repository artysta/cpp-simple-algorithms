#include <cstdlib>
#include <iostream>

using namespace std;

void silnia(long int * n) {
    int tmp = 1;
    for (int i = 1; i <= ( * n); i++) {
        tmp *= i;
    }
    * n = tmp;
}

int main(int argc, char * argv[]) {
    long int n = 5; // silnia dla 5 wynosi: 1*2*3*4*5=120     n!=1*2*3*...*n
    silnia( & n);
    cout << n << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}