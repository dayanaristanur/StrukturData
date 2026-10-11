
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Struktur untuk menyimpan koordinat
struct Titik {
    float x;
    float y;
};

// Fungsi memasukkan koordinat
void inputTitik(Titik &t) {
    cout << "Masukkan koordinat X: ";
    cin >> t.x;

    cout << "Masukkan koordinat Y: ";
    cin >> t.y;
}

// Fungsi menampilkan koordinat
void tampilTitik(Titik t) {
    cout << "(" << t.x << ", " << t.y << ")" << endl;
}

// Fungsi menghitung jarak
float hitungJarak(Titik t1, Titik t2) {
    return sqrt(pow(t2.x - t1.x, 2) +
                pow(t2.y - t1.y, 2));
}

// Program utama
int main() {
    Titik tA, tB;

    cout << "=== PROGRAM MENGHITUNG JARAK ===" << endl;

    cout << "\nInput Titik A" << endl;
    inputTitik(tA);

    cout << "\nInput Titik B" << endl;
    inputTitik(tB);

    cout << "\n=== HASIL KOORDINAT ===" << endl;

    cout << "Titik A: ";
    tampilTitik(tA);

    cout << "Titik B: ";
    tampilTitik(tB);

    float jarak = hitungJarak(tA, tB);

    cout << fixed << setprecision(2);
    cout << "\nJarak antara kedua titik: "
         << jarak << endl;

    return 0;
}
