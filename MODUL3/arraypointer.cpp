
#include <iostream>
#include "arraypointer.h"

using namespace std;

// Fungsi menampilkan isi array
void tampilArray(int data[3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }
}

// Fungsi menukar angka dalam array
void tukarArray(int a[3][3], int b[3][3],
                int baris, int kolom) {

    int sementara = a[baris][kolom];

    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = sementara;
}

// Fungsi menukar nilai menggunakan pointer
void tukarPointer(int *p1, int *p2) {

    int sementara = *p1;

    *p1 = *p2;
    *p2 = sementara;
}
