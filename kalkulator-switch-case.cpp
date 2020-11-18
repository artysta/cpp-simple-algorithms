#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;
    char znak;
    cout << "Podaj znak dzialania: ";
    cin >> znak;
    switch (znak) {
        case '+':
            cout << x + y << endl;
            break;
        case '-':
            cout << x - y << endl;
            break;
        case '*':
            cout << x * y << endl;
            break;
        case '/':
            cout << x / y << endl;
            break;
        default:
            cout << "Zly znak!" << endl;
            break;
    } //switch

    system("PAUSE");
    return EXIT_SUCCESS;
}