#include <iostream>

using namespace std;

int main() {
    int d, e, f;

    // Meminta pengguna untuk memasukkan ukuran array tiga dimensi
    cout << "Masukkan jumlah elemen untuk dimensi d: ";
    cin >> d;
    cout << "Masukkan jumlah elemen untuk dimensi e: ";
    cin >> e;
    cout << "Masukkan jumlah elemen untuk dimensi f: ";
    cin >> f;

    // Mendeklarasikan array tiga dimensi dengan ukuran yang dimasukkan pengguna
    int arr[d][e][f];

    // Meminta pengguna untuk memasukkan nilai-nilai untuk setiap elemen array
    cout << "Masukkan nilai-nilai untuk array tiga dimensi:" << endl;
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < e; ++j) {
            for (int k = 0; k < f; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan nilai-nilai yang dimasukkan pengguna
    cout << "Nilai-nilai array tiga dimensi yang dimasukkan pengguna:" << endl;
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < e; ++j) {
            for (int k = 0; k < f; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "]: " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
