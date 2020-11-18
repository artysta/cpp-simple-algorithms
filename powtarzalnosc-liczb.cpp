#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    int tab[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 10;
        cout << tab[i] << "\t";
    }

    int licznik[10];

    for (int i = 0; i < 10; i++) {
        licznik[i] = 0;
    }

    for (int i = 0; i < 100; i++) {
        licznik[tab[i]]++;
    }
    /*for(int i=0;i<100;i++)
    {
    switch(tab[i])
    {
    case 0:licznik[0]++;break;
    case 1:licznik[1]++;break;
    case 2:licznik[2]++;break;
    case 3:licznik[3]++;break;
    case 4:licznik[4]++;break;
    case 5:licznik[5]++;break;
    case 6:licznik[6]++;break;
    case 7:licznik[7]++;break;
    case 8:licznik[8]++;break;
    case 9:licznik[9]++;break;
    default:break;             
    }       
    }*/

    for (int i = 0; i < 10; i++) {
        cout << i << " <- " << licznik[i] << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}