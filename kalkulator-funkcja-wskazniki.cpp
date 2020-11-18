#include <iostream>

using namespace std;

void test2(double * x, double y, char z) {
    if (z == '+')
        ( * x) = ( * x) + y;

    if (z == '-')
        ( * x) = ( * x) - y;

    if (z == '*')
        ( * x) = ( * x) * y;

    if (z == '/')
        if (y != 0)
            ( * x) = ( * x) / y;
}
int main(int argc, char * argv[]) {
    double x = 5.0;
    double y = 2.5;

    test2( & x, y, '+');
    cout << x << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}