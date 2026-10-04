#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Input angka: ";
    cin >> angka;

    for (int baris = angka; baris >= 1; baris--) {

        for (int spasi = angka; spasi > baris; spasi--) {
            cout << "  ";
        }

        for (int kiri = baris; kiri >= 1; kiri--) {
            cout << kiri << " ";
        }

        cout << "* ";

        for (int kanan = 1; kanan <= baris; kanan++) {
            cout << kanan << " ";
        }

        cout << endl;
    }

    for (int spasi = 0; spasi < angka; spasi++) {
        cout << "  ";
    }

    cout << "*";
}