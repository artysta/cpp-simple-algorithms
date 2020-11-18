#include <iostream>

int silnia(int n) //dla 5, silnia=5*4*3*2*1
{
    if ((n == 0) || (n == 1)) return 1;
    return (n * silnia(n - 1));
}

int wielokrotna_silnia(int n, int k) {
    if ((n <= 0) && (n < k)) return 1;
    return (n * wielokrotna_silnia(n - k, k));
}

int nwd(int a, int b) //najwiekszy wspolny dzielnik
{
    if (b == 0) return a;
    return nwd(b, a % b);
}

int fib(int n) //suma dwoch poprzednich liczb
{
    if (n > 2)
        return (fib(n - 1) + fib(n - 2));
}

long int symbol_newtona(int n, int k) //symbol newtona(ilosc mozliwych kombinacji(k), zbioru liczb(n))
{
    int bla;
    if ((k == 0) || (n == 0)) return 1;
    return (symbol_newtona(n - 1, k - 1) + symbol_newtona(n - 1, k));
}

int main(int argc, char *
    const argv[]) {
    cout << fib(4);
    return 0;
}