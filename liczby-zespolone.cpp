#include <cstdlib>
#include <iostream>

using namespace std;

struct zespolona {
    double a;
    double b;
};

zespolona operator * (zespolona z1, zespolona z2) {
    zespolona ztmp;
    ztmp.a = z1.a * z2.a - z1.b * z2.b;
    ztmp.b = z1.b * z2.a + z1.a * z2.b;
    return ztmp;
}

zespolona operator / (zespolona z1, zespolona z2) {
    zespolona ztmp;
    ztmp.a = (z1.a * z2.a + z1.b * z2.b) / (z2.a * z2.b + z2.b * z2.b);
    ztmp.b = (z1.b * z2.a - z1.a * z2.b) / (z2.a * z2.a + z2.b * z2.b);
    return ztmp;
}

zespolona operator + (zespolona z1, zespolona z2) {
    zespolona ztmp;
    ztmp.a = (z1.a + z2.a);
    ztmp.b = (z1.b + z2.b);
    return ztmp;
}

zespolona operator - (zespolona z1, zespolona z2) {
    zespolona ztmp;
    ztmp.a = (z1.a - z2.a);
    ztmp.b = (z1.b - z2.b);
    return ztmp;
}

int main(int argc, char * argv[]) {

    system("PAUSE");
    return EXIT_SUCCESS;
}