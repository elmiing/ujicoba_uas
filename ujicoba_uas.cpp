
#include <iostream>
using namespace std;

int main() {
    int n, key;
    int awal, tengah, akhir;
    int langkah = 0;
    int posisi = -1;

    cout << "=== PENCARIAN KODE BUKU PERPUSTAKAAN ===" << endl;

    // Input jumlah buku
    cout << "Masukkan jumlah buku: ";
    cin >> n;

    int kodeBuku[n];

    // Input kode buku secara berurutan
    cout << "\nMasukkan kode buku secara menaik (Ascending):" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Kode buku ke-" << i + 1 << ": ";
        cin >> kodeBuku[i];
    }

    // Input kode buku yang dicari jduiouwouewiojdkajlkajlajla
    cout << "\nMasukkan kode buku yang dicari: ";
    cin >> key;

    // Proses Binary Search
    awal = 0;
    akhir = n - 1;

    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;
        langkah++;

        cout << "\nLangkah pembagian ke-" << langkah
             << ": Memeriksa indeks " << tengah
             << " (Kode: " << kodeBuku[tengah] << ")" << endl;

        if (kodeBuku[tengah] == key) {
            posisi = tengah;
            break;
        }
        else if (kodeBuku[tengah] < key) {
            awal = tengah + 1;
        }
        else {
            akhir = tengah - 1;
        }
    }

    // Menampilkan hasil pencarian
    cout << "\n=== HASIL PENCARIAN ===" << endl;

    if (posisi != -1) {
        cout << "Kode buku " << key << " ditemukan." << endl;
        cout << "Posisi indeks: " << posisi << endl;
        cout << "Posisi rak ke-" << posisi + 1 << endl;
    }
    else {
        cout << "Kode buku " << key << " tidak ditemukan." << endl;
    }

    cout << "Jumlah langkah pembagian: " << langkah << endl;

    return 0;
}
