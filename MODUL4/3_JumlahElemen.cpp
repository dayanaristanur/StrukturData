
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

int sumList(List L) {
    int total = 0;
    address P = L.first;

    while (P != NULL) {
        total += P->info;
        P = P->next;
    }
    return total;
}

int main() {
    List L;
    createList(L);
    int n, x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        insertLast(L, alokasi(x));
    }

    cout << sumList(L) << endl;

    while (L.first != NULL) {
        address P = L.first;
        L.first = P->next;
        delete P;
    }

    return 0;
}
