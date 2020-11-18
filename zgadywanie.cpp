#include <iostream>

int main(int argc, char *
    const argv[]) {
    // insert code here...
    int los;
    srand(time(NULL));
    los = rand() % 6 + 1;
    int ocena = 0;

    do {
        try {
            std::cout << "Jaka masz ocene?";
            std::cin >> ocena;
            if (ocena != los)
                throw 111;
            std::cout << "Tak to ta ocena\n";
        } catch (int e) {
            std::cout << "Klamca! Nie ta ocena! \n";
        }
    }
    while (ocena != los);
    return 0;
}