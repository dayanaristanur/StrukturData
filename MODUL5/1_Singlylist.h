
#ifndef SINGLYLIST_H
#define SINGLYLIST_H

typedef int infotype;
typedef struct ElmList* address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Nomor 3: fungsi pencarian
address findElm(List L, infotype x);

// Nomor 4: fungsi menghitung total
int sumInfo(List L);

#endif
