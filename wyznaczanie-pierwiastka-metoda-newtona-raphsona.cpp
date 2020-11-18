#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double pierwiastek(double x, double d) {
    double a = x;

    while (fabs(a - (x / a)) > d) {
        a = (a + (x / a)) / 2;
    }
    return a;

}


int main(int argc, char * argv[]) {

        cout << pierwiastek(64, 0.1) << endl;

        system("PAUSE");
        r