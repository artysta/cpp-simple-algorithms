#include <cstdlib>
#include <iostream>

using namespace std;

struct ulamek {
    int l;
    int m;
};

/*ulamek dodaj(ulamek u1, ulamek u2)     DODAWANIE
{
 ulamek w;
 w.m=u1.m*u2.m;
 w.l=u1.l*u2.m+u2.l-u1.m;
 return w;       
}*/

/*ulamek dodaj(ulamek u1, ulamek u2)     ODEJMOWANIE
{
 ulamek w;
 w.m=u1.m*u2.m;
 w.l=u1.l*u2.m-u2.l-u1.m;
 return w;       
}*/

/*ulamek dodaj(ulamek u1, ulamek u2)     MNOŻENIE
{
 ulamek w;
 w.m=u1.m*u2.m;
 w.l=u1.l*u2.l;
 return w;       
}*/

ulamek dodaj(ulamek u1, ulamek u2) //DZIELENIE
{
    ulamek w;
    w.m = u1.m * u2.l;
    w.l = u1.l * u2.m;
    return w;
}

int main(int argc, char * argv[]) {
    ulamek u1, u2;
    u1.l = 1;
    u1.m = 2;
    u2.l = 2;
    u2.m = 3;

    ulamek u3;

    u3 = dodaj(u1, u2);
    cout << u3.l << "/" << u3.m << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}