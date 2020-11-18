#include <iostream>

using namespace std;

/*void zamien(int &a,int &b)    //zamienia liczby miejscami
{
    int tmp=a;
    a=b;
    b=tmp;
}*/

void zamien(int * a, int * b) {
    int tmp = * a;
    * a = * b;
    * b = tmp;
}

int main(int argc, char *
    const argv[]) {

    int * wsk;
    int liczba;

    wsk = & liczba;
    //cout<<wsk;                //adres zmiennej o nazwie liczba
    //cout<<&wsk;                //adres wskaźnika
    liczba = 12;
    int a = 10;
    int b = 20;
    cout << a << " | " << b << endl; //przeda zamiana
    zamien( & a, & b);
    cout << a << " | " << b << endl; //po zamianie
    cout << liczba << endl;
    * wsk = 21; //przypisuje wartosc "21" do liczby na którą wskazuje wskaźnik "*wsk"
    cout << * wsk; //wskaźnik wyswietlajacy zawartosc zmiennej "liczba"

    return 0;
}