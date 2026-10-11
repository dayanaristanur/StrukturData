
#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    Mahasiswa data[10];
    int jumlah;

    cout << "Jumlah mahasiswa (1-10): ";
    cin >> jumlah;

    if (!cin || jumlah < 1 || jumlah > 10) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(data[i]);
    }

    cout << "\n=== HASIL NILAI MAHASISWA ===\n";

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        tampilMahasiswa(data[i]);
    }

    return 0;
}

