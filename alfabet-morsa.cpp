#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char * argv[]) {
    string slowo;

    cout << "Podaj jakies slowo: ";
    cin >> slowo;

    for (int i = 0; i < slowo.length(); i++) {
        switch (slowo[i]) {
            case 'a' || 'A':
                Beep(100, 200);
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
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}