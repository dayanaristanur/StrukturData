
#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {

    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);

    cout << "=== DATA PELAJARAN ===" << endl;

    tampil_pelajaran(pel);

    return 0;
}
