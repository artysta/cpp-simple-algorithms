#include <cstdlib>

#include <iostream>

using namespace std;

struct punkt {
    int x;
    int y;
};

punkt operator + (punkt p, int liczba) {
    punkt ptmp;
    ptmp.x = p.x + liczba;
    ptmp.y = p.y + liczba;
    return ptmp;
}

punkt operator * (punkt p, int liczba) {
    punkt ptmp;
    ptmp.x = p.x * liczba;
    ptmp.y = p.y * liczba;
    return ptmp;
}

int main(int argc, char * argv[]) {
    punkt p, p_dodawanie, p_mnozenie;
    int liczba;
    p.x = 1;
    p.y = 2;
    Podaj liczbe
    liczba = 2;
    p_dodawanie = operator + (p, liczba);
    p_mnozenie = operator * (p, liczba);
    cout << "Po dodaniu: " << endl << "x= :" << p_dodawanie.x << endl << "y= :" << p_dodawanie.y << endl << endl;
    cout << "Po pomnozeniu: " << endl << "x= :" << p_mnozenie.x << endl << "y= :" << p_mnozenie.y << endl << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}