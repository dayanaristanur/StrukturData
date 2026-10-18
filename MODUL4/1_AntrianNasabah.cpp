
#include <iostream>
#include <string>
using namespace std;

typedef string infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L) {
    L.first = NULL;
}

address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = NULL;
    return P;
}

void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != NULL)
            Q = Q->next;
        Q->next = P;
    }
}

void deleteFirst(List &L) {
    if (L.first == NULL) {
        cout << "Antrean kosong\n";
    } else {
        address P = L.first;
        cout << "Melayani: " << P->info << endl;
        L.first = P->next;
        delete P;
    }
}

void printInfo(List L) {
    address P = L.first;
    cout << "Antrean: ";
    if (P == NULL) cout << "Kosong";
    while (P != NULL) {
        cout << P->info;
        if (P->next != NULL) cout << " -> ";
        P = P->next;
    }
    cout << endl;
}

int main() {
    List L;
    createList(L);
    int pilihan;
    string nama;

    do {
        cout << "\n1. Tambah Nasabah";
        cout << "\n2. Layani Nasabah";
        cout << "\n3. Keluar";
        cout << "\nPilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Nama: ";
            cin >> ws;
            getline(cin, nama);
            insertLast(L, alokasi(nama));
            printInfo(L);
        } else if (pilihan == 2) {
            deleteFirst(L);
            printInfo(L);
        }
    } while (pilihan != 3);

    while (L.first != NULL) {
        address P = L.first;
        L.first = P->next;
        delete P;
    }

    return 0;
}
