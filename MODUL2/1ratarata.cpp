#include <iostream>
using namespace std;

int main() {
    int n;
    int nilai[100];
    int total = 0;
    int rata_rata;
    int di_atas = 0;

    // Input banyak mahasiswa
    cin >> n;

    // Input nilai mahasiswa
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
        total = total + nilai[i];
    }

    // Menghitung rata-rata
    rata_rata = total / n;

    // Menghitung nilai yang di atas rata-rata
    for (int i = 0; i < n; i++) {
        if (nilai[i] > rata_rata) {
            di_atas++;
        }
    }

    // Menampilkan hasil
    cout << "Rata-rata: " << rata_rata << endl;
    cout << "Di atas rata-rata: " << di_atas << endl;

    return 0;
}