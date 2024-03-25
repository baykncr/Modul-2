#include <iostream>

using namespace std;

int main() {
    int angka[10];
    
    // Meminta pengguna untuk memasukkan angka-angka
    cout << "Masukkan angka-angka (10 angka dipisahkan spasi): ";
    for (int i = 0; i < 10; ++i) {
        cin >> angka[i];
    }

    // Menampilkan data array
    cout << "Data Array: ";
    for (int i = 0; i < 10; ++i) {
        cout << angka[i] << " ";
    }
    cout << endl;

    // Menampilkan nomor genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < 10; ++i) {
        if (angka[i] % 2 == 0) {
            cout << angka[i] << ", ";
        }
    }
    cout << endl;

    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < 10; ++i) {
        if (angka[i] % 2 != 0) {
            cout << angka[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}
