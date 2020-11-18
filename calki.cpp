#include <iostream>
#include <math.h>

double f(double x) {
    return (2 * x * x - 4);
}

double polep(int n, double a, double b) {
    double d = (fabs(b - a) / n);
    double suma = 0.0;

    for (int i = 0; i < n; i++) {
        suma += d * f(a + (i + 1) * d);
    }

    return suma;
}

int main(int argc, char *
    const argv[]) {

    double a = 10.0;
    double b = 25.0;
    int n = 10;

    std::cout << n << " " << polep(n, a, b) << std::endl;
    n *= 10;
    std::cout << n << " " << polep(n, a, b) << std::endl;
    n *= 10;
    std::cout << n << " " << polep(n, a, b) << std::endl;
    
    return 0;
}