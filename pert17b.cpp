#include <iostream>
#include <cstring> // untuk strcpy
using namespace std;

void coment(char ket[30], int n)
{
    int a = n % 2;
    if (a == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");
}

int main()
{
    char keterangan[30];
    int angka;

    cout << "Masukkan bilangan: ";
    cin >> angka;

    coment(keterangan, angka);

    cout << keterangan << endl;

    return 0;
}
