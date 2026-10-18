
#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    int tahun;
    Buku* next;
};

typedef Buku* address;

struct List {
    address first;
};

void createList(List &L) {
    L.first = NULL;
}

void insertLast(List &L, string judul, int tahun) {
    address P = new Buku{judul, tahun, NULL};

    if (L.first == NULL) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != NULL)
            Q = Q->next;
        Q->next = P;
    }
}

void deleteLast(List &L) {
    if (L.first == NULL) return;

    if (L.first->next == NULL) {
        delete L.first;
        L.first = NULL;
    } else {
        address Q = L.first;
        while (Q->next->next != NULL)
            Q = Q->next;

        delete Q->next;
        Q->next = NULL;
    }
}

void printInfo(List L) {
    address P = L.first;
    cout << "Daftar Buku:\n";

    while (P != NULL) {
        cout << P->judul << " ("
             << P->tahun << ")\n";
        P = P->next;
    }
}

int main() {
    List L;
    createList(L);
    int n, tahun;
    string judul;

    cout << "Jumlah buku: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Judul: ";
        cin >> ws;
        getline(cin, judul);
        cout << "Tahun: ";
        cin >> tahun;
        insertLast(L, judul, tahun);
    }

    deleteLast(L);
    printInfo(L);

    while (L.first != NULL) {
        address P = L.first;
        L.first = P->next;
        delete P;
    }

    return 0;
}
