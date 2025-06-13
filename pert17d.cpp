#include <iostream>
using namespace std;

// deklarasi prototipe
void tambah(int *c, int *d);  

int main()
{
    int a = 4;
    int b = 6;

    cout << "Nilai sebelum pemanggilan fungsi:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    tambah(&a, &b);

    cout << "Nilai setelah pemanggilan fungsi:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

void tambah(int *c, int *d)
{
    *c += 7;
    *d += 5;

    cout << "Nilai di dalam Fungsi Tambah():" << endl;
    cout << "c = " << *c << ", d = " << *d << endl;
}
