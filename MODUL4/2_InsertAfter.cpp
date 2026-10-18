
#include <iostream>
using namespace std;

typedef int infotype;
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

address alokasi(int x) {
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

void insertAfter(address Prec, address P) {
    P->next = Prec->next;
    Prec->next = P;
}

void printInfo(List L) {
    address P = L.first;
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
    int n, x, cari, baru;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        insertLast(L, alokasi(x));
    }

    cin >> cari >> baru;

    address P = L.first;
    while (P != NULL && P->info != cari)
        P = P->next;

    if (P != NULL)
        insertAfter(P, alokasi(baru));

    printInfo(L);

    while (L.first != NULL) {
        P = L.first;
        L.first = P->next;
        delete P;
    }

    return 0;
}
