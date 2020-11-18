#include <iostream>

int main(int argc, char *
    const argv[]) {
    // insert code here...
    std::cout << "Podaj liczbe calowita: ";
    int a;
    try {
        std::cin >> a;
        if ((a < 0) || (a > 10))
            throw 10;
    } catch (int e) {
        std::cout << "Nieprawidlowy format danych wejsciowych";
    }
    return 0;
}