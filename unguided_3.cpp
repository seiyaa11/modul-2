#include <iostream>
using namespace std;

int main() {
    int n, i, pilihan;
    float total = 0;
    int maks, min;
    float rata;

    // Meminta user untuk memasukkan jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Deklarasi array
    int arr[n];

    // Meminta user untuk memasukkan nilai elemen array
    cout << "Masukkan " << n << " angka:\n";
    for (i = 0; i < n; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> arr[i];
        total += arr[i];
    }

    // Menampilkan menu
    do {
        cout << "\nMenu:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "0. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                // Mencari nilai maksimum
                maks = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > maks) {
                        maks = arr[i];
                    }
                }
                cout << "Nilai maksimum array adalah: " << maks << endl;
                break;
            case 2:
                // Mencari nilai minimum
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai minimum array adalah: " << min << endl;
                break;
            case 3:
                // Menghitung nilai rata-rata
                total = 0; // Reset total
                for (i = 0; i < n; i++) {
                    total += arr[i];
                }
                rata = total / n;
                cout << "Nilai rata-rata array adalah: " << rata << endl;
                break;
        }
    } while (pilihan != 0);

    return 0;
}