#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(int argc, char * argv[]) {
    string slowo;
    int c1 = 800 /*czestotliwosc dzwieku*/ , t1 = 250 /*czas trwania krotkiego dzwieku*/ , t2 = 750 /*czas trwania dlugiego dzwieku*/ ;

    cout << "Podaj jakies slowo: ";
    cin >> slowo;

    for (int i = 0; i < slowo.length(); i++) {
        switch (slowo[i]) {
            case 'a':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'A':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'b':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                break;
            case 'B':
                Beep(c1, t2);
                Beep(c1, t1);
                Beep(c1, t1);
                Beep(c1, t1);
                break;
            case 'c':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'C':
                Beep(c1, t2);
                Beep(c1, t1);
                Beep(c1, t2);
                Beep(c1, t1);
                break;
            case 'd':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'D':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'e':
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'E':
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'f':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'F':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'g':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'G':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'h':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'H':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'i':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'I':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'j':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'J':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'k':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'K':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'l':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'L':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'm':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'M':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'n':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'N':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'o':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'O':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'p':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'P':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'q':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'Q':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'r':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'R':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 's':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'S':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 't':
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'T':
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'u':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(0, 250);
                break;
            case 'U':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'w':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'W':
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'x':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'X':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'y':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'Y':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                break;
            case 'z':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            case 'Z':
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t2);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                Beep(c1, t1);
                Beep(0, 250);
                break;
            default:
                cout << "Zly znak!" << endl;
                break;
        } //switch
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}