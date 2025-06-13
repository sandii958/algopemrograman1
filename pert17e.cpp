#include <iostream>
using namespace std;

// Fungsi luas lingkaran
float luas(int r) {
    return 3.14 * r * r;
}

// Fungsi keliling lingkaran
float kel(int r) {
    return 2 * 3.14 * r;
}

int main()
{
    int j;
    cout << "Masukkan jari-jari = "; 
    cin >> j;

    cout << "Luas lingkaran = " << luas(j) << endl;
    cout << "Keliling lingkaran = " << kel(j) << endl;

    return 0;
}
