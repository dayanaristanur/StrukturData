#include <iostream>
using namespace std;

int main() {
    int matriks[3][3];
    int jumlah = 0;

    // Input isi matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriks[i][j];
        }
    }

    // Menjumlahkan diagonal utama
    for (int i = 0; i < 3; i++) {
        jumlah = jumlah + matriks[i][i];
    }

    // Menampilkan hasil
    cout << jumlah << endl;

    return 0;
}