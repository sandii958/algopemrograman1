#include <iostream>
using namespace std;

// deklarasi prototipe
void tambah(int m, int n);

int main()
{
    int a = 5;
    int b = 9;

    cout << "Nilai sebelum fungsi digunakan:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    tambah(a, b);

    cout << "Nilai setelah fungsi digunakan:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

void tambah(int m, int n)
{
    m += 5;
    n += 7;
    cout << "Nilai di dalam Fungsi Tambah():" << endl;
    cout << "m = " << m << ", n = " << n << endl;
}
