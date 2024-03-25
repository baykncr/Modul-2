#include <iostream>

using namespace std;

int main() {
    int angka;

   
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> angka;

   
    int arr[angka];

  
    cout << "Masukkan nilai-nilai array:" << endl;
    for (int i = 0; i < angka; ++i) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int max_value = arr[0];
    int min_value = arr[0];
    int sum = arr[0];

    
    for (int i = 1; i < angka; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
        sum += arr[i];
    }


    int average = sum / angka;

    cout << "Nilai maksimum: " << max_value << endl;
    cout << "Nilai minimum: " << min_value << endl;
    cout << "Nilai rata-rata: " << average << endl;

    return 0;
}
