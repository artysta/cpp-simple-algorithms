#include <cstdlib>
#include <iostream>

using namespace std;

void test(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << " * " << i << " = " << i * i << endl;
    }
}

int main(int argc, char * argv[]) {
    test(5);

    system("PAUSE");
    return EXIT_SUCCESS;
}