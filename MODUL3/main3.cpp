
#include <iostream>
#include "arraypointer.h"

using namespace std;

int main() {

    // Membuat dua array 3x3
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int b[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    // Membuat dua pointer
    int *p1 = &a[0][0];
    int *p2 = &b[0][0];

    // Menampilkan array awal
    cout << "=== ARRAY SEBELUM DITUKAR ===" << endl;

    cout << "\nArray A:" << endl;
    tampilArray(a);

    cout << "\nArray B:" << endl;
    tampilArray(b);

    // Memasukkan posisi yang ingin ditukar
    int baris, kolom;

    cout << "\nMasukkan baris (1-3): ";
    cin >> baris;

    cout << "Masukkan kolom (1-3): ";
    cin >> kolom;

    // Memeriksa posisi
    if (!cin || baris < 1 || baris > 3 ||
        kolom < 1 || kolom > 3) {

        cout << "Posisi tidak valid!" << endl;
        return 0;
    }

    // Menukar nilai array
    tukarArray(a, b, baris - 1, kolom - 1);

    cout << "\n=== SETELAH TUKAR ARRAY ===" << endl;

    cout << "\nArray A:" << endl;
    tampilArray(a);

    cout << "\nArray B:" << endl;
    tampilArray(b);

    // Menampilkan nilai pointer
    cout << "\nNilai pointer sebelum ditukar:" << endl;
    cout << "Pointer 1: " << *p1 << endl;
    cout << "Pointer 2: " << *p2 << endl;

    // Menukar nilai pointer
    tukarPointer(p1, p2);

    cout << "\nNilai pointer setelah ditukar:" << endl;
    cout << "Pointer 1: " << *p1 << endl;
    cout << "Pointer 2: " << *p2 << endl;

    // Menampilkan hasil akhir
    cout << "\n=== HASIL AKHIR ARRAY ===" << endl;

    cout << "\nArray A:" << endl;
    tampilArray(a);

    cout << "\nArray B:" << endl;
    tampilArray(b);

    return 0;
}
