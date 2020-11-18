#include <cstdlib>
#include <iostream>

using namespace std;

void szlaczek(int n, char z) {
    for (int i = 0; i < n; i++)
        cout << z;
}

double kwadrat(double a) {
    return (a * a);
}

int main(int argc, char * argv[]) {
    cout << kwadrat(5);
    //szlaczek(1000,'&');
    cout << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}