#include <iostream>
using namespace std;

int main() {
    int angka;
    int puluhan;
    int satuan;

    string nama[10] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka < 10) {
        cout << nama[angka];
    }

    else if (angka >= 20) {
        puluhan = angka / 10;
        satuan = angka % 10;

        cout << nama[puluhan] << " puluh";

        if (satuan != 0) {
            cout << " " << nama[satuan];
        }
    }
}