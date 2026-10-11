
#include <iostream>
#include "pelajaran.h"

using namespace std;

// Fungsi membuat data pelajaran
pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran hasil;

    hasil.namaMapel = namapel;
    hasil.kodeMapel = kodepel;

    return hasil;
}

// Fungsi menampilkan data pelajaran
void tampil_pelajaran(pelajaran pel) {
    cout << "Nama pelajaran : " << pel.namaMapel << endl;
    cout << "Kode pelajaran : " << pel.kodeMapel << endl;
}
