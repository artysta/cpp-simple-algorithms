#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
    fstream plik, plik2;
    string linia;
    plik.open("C:/Dev-Cpp/plik.txt", ios:: in );
    plik2.open("C:/Dev-Cpp/plik2.txt", ios::out);

    while (!plik.eof()) {
        getline(plik, linia);
        plik2 << linia;
    }

    plik.close();
    plik2.close();

    system("PAUSE");
    return EXIT_SUCCESS;
}