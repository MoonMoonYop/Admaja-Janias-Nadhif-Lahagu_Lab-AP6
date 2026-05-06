#include <iostream>
using namespace std;

int main() {
    int a, b;

    // user diminta untuk memasukkan nilai a dan b
    cout << "INPUT  : ";
    cin >> a >> b;

    // Menggunakan perulangan while Selama b bukan 0 akan terus dibagi
    while (b != 0) { // kondisi berhentinya tidak sama dengan 0
        int sisa = a % b;
        a = b;
        b = sisa; // b itu dibuat sama dengan variabel sisa
    }

    cout << "OUTPUT : " << a << endl; // menampilkan nilai a

    return 0;
}