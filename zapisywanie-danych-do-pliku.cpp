#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
    fstream plik;
    plik.open("h:\\dane.txt", ios::out);
    string dane;
    getline(cin, dane);

    while (dane != "koniec") {
        plik << dane;
        getline(cin, dane);
    }
    plik.close();
    cout << "Plik zapisany" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}