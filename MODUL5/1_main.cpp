
#include <iostream>
#include "1_Singlylist.h"
using namespace std;

int main() {
    List L;
    CreateList(L);

    // Nomor 2: membuat dan menampilkan list
    insertFirst(L, alokasi(2));
    insertFirst(L, alokasi(0));
    insertFirst(L, alokasi(8));
    insertFirst(L, alokasi(12));
    insertFirst(L, alokasi(9));

    cout << "Isi list: ";
    printInfo(L);

    // Nomor 3: mencari angka 8
    address hasil = findElm(L, 8);

    if (hasil != nullptr) {
        cout << "Angka 8 ditemukan." << endl;
    } else {
        cout << "Angka 8 tidak ditemukan." << endl;
    }

    // Nomor 4: menghitung total nilai
    cout << "Total nilai: " << sumInfo(L) << endl;

    return 0;
}
