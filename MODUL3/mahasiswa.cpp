
#include <iostream>
#include <iomanip>
#include "mahasiswa.h"

using namespace std;

float hitungNilaiAkhir(Mahasiswa m) {
    return 0.3f * m.uts + 0.4f * m.uas
           + 0.3f * m.tugas;
}

void inputMahasiswa(Mahasiswa &m) {
    cout << "Nama: ";
    getline(cin >> ws, m.nama);

    cout << "NIM: ";
    getline(cin >> ws, m.nim);

    cout << "Nilai UTS: ";
    cin >> m.uts;

    cout << "Nilai UAS: ";
    cin >> m.uas;

    cout << "Nilai Tugas: ";
    cin >> m.tugas;

    m.nilaiAkhir = hitungNilaiAkhir(m);
}

void tampilMahasiswa(Mahasiswa m) {
    cout << "Nama: " << m.nama
         << " | NIM: " << m.nim << endl;

    cout << "UTS: " << m.uts
         << " | UAS: " << m.uas
         << " | Tugas: " << m.tugas << endl;

    cout << fixed << setprecision(2);
    cout << "Nilai Akhir: "
         << m.nilaiAkhir << endl;
}
