
#include "1_Singlylist.h"
#include <iostream>
using namespace std;

// Membuat list kosong
void CreateList(List &L) {
    L.First = nullptr;
}

// Membuat node baru
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    return P;
}

// Menghapus node dari memori
void dealokasi(address P) {
    delete P;
}

// Menampilkan isi list
void printInfo(List L) {
    address P = L.First;

    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }

    cout << endl;
}

// Menambahkan node di awal list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Nomor 3: mencari elemen
address findElm(List L, infotype x) {
    address P = L.First;

    while (P != nullptr) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }

    return nullptr;
}

// Nomor 4: menghitung total nilai
int sumInfo(List L) {
    int total = 0;
    address P = L.First;

    while (P != nullptr) {
        total += P->info;
        P = P->next;
    }

    return total;
}
