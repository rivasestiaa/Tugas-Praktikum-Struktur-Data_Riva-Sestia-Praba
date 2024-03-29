#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Struktur untuk menyimpan informasi item menu //
struct MenuItem {
    string name;
    double price;
};

// Fungsi untuk menampilkan menu dan meminta pengguna memilih //
int showMenuAndGetChoice(const vector<MenuItem>& menu) {
    cout << "Welcome to Virgo Coffee\n";
    cout << "Our Menu :\n";
    for (size_t i = 0; i < menu.size(); ++i) {
        cout << i+1 << ". " << menu[i].name << " - $" << menu[i].price << endl;
    }
    cout << "Silakan pilih item yang ingin di pesan (1-" << menu.size() << ") : ";
    int choice;
    cin >> choice;
    return choice;
}

int main() {
    vector<MenuItem> menu = {{"Espresso", 2.5}, {"Cappuccino", 3.0}, {"Latte", 3.5}, {"Americano", 2.75}}; // Menu kopi //

    vector<MenuItem> order; // Vektor untuk menyimpan pesanan pengguna //

    char addMore;
    do {
        int choice = showMenuAndGetChoice(menu);

        // Validasi pilihan pengguna //
        if (choice < 1 || choice > menu.size()) {
            cout << "Pilihan tidak valid.\n";
            continue;
        }

        // Memasukkan item ke dalam pesanan //
        order.push_back(menu[choice - 1]);

        cout << "Tambah item lain? (y/n) : ";
        cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    // Menghitung total harga pesanan //
    double total = 0.0;
    cout << "\nPesanan Anda : \n";
    for (const auto& item : order) {
        cout << item.name << " - $" << item.price << endl;
        total += item.price;
    }

    // Mencetak total harga pesanan //
    cout << "Total harga: $" << fixed << setprecision(2) << total << endl;

    cout << endl;
    cout << "Program dibuat oleh : Riva Sestia Praba" << endl;
    cout << "NPM : 2310631170045" << endl;
    cout << endl;

    return 0;
}
