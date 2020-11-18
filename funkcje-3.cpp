#include <cstdlib>
#include <iostream>

using namespace std;

void dzialania(double a, double b) {
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    if (b == 0 || a == 0)
        cout << "Nie mozna dzielic przez zero!";
    else
        cout << a << " / " << b << " = " << a / b << endl;
}

int main(int argc, char * argv[]) {

    dzialania(505, 120);
    cout << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}