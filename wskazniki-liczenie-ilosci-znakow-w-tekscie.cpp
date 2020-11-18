#include <cstdlib>
#include <iostream>

using namespace std;

int test(char * tekst) {
    int d = 0;
    while ( * tekst) {
        d++;
        * tekst++;
    }
    return d;
}

int main(int argc, char * argv[]) {
    char * t = "a";
    cout << test(t) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}