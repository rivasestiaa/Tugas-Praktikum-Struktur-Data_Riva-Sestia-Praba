#include <iostream>
#include <string>

using namespace std;

//Structure untuk data nilai//
struct Nilai {
    float absen, tugas, uts, uas, nilai_akhir;
    char index_huruf;
};

//Structure untuk data mahasiswa//
struct Mahasiswa {
    string npm, nama;
    Nilai nilai;
};

//Deklarasi array untuk menyimpan data mahasiswa//
Mahasiswa data_mahasiswa[30];
int jumlah_mahasiswa = 0;

//Fungsi untuk menghitung nilai akhir dan index huruf//
void hitungNilai(Nilai &nilai) {
    nilai.nilai_akhir = 0.1 * nilai.absen + 0.2 * nilai.tugas + 0.3 * nilai.uts + 0.4 * nilai.uas;

    if (nilai.nilai_akhir >= 80)
        nilai.index_huruf = 'A';
    else if (nilai.nilai_akhir >= 70)
        nilai.index_huruf = 'B';
    else if (nilai.nilai_akhir >= 60)
        nilai.index_huruf = 'C';
    else
        nilai.index_huruf = 'D';
}

//Fungsi untuk menampilkan data mahasiswa//
void tampilkanData() {
    cout << "Data Mahasiswa :\n";
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        cout << "NPM : " << data_mahasiswa[i].npm << endl;
        cout << "Nama : " << data_mahasiswa[i].nama << endl;
        cout << "Nilai :\n";
        cout << "  Absen : " << data_mahasiswa[i].nilai.absen << endl;
        cout << "  Tugas : " << data_mahasiswa[i].nilai.tugas << endl;
        cout << "  UTS : " << data_mahasiswa[i].nilai.uts << endl;
        cout << "  UAS : " << data_mahasiswa[i].nilai.uas << endl;
        cout << "  Nilai Akhir : " << data_mahasiswa[i].nilai.nilai_akhir << endl;
        cout << "  Index Huruf : " << data_mahasiswa[i].nilai.index_huruf << endl;
        cout << endl;
    }
}

//Fungsi untuk menambah data mahasiswa//
void inputData() {
    if (jumlah_mahasiswa >= 30) {
        cout << "Maaf, sudah mencapai batas maksimal mahasiswa.\n";
        return;
    }

    Mahasiswa mhs;
    cout << "Masukkan NPM : ";
    cin >> mhs.npm;
    cout << "Masukkan Nama : ";
    cin.ignore();
    getline(cin, mhs.nama);
    cout << "Masukkan Nilai Absen : ";
    cin >> mhs.nilai.absen;
    cout << "Masukkan Nilai Tugas : ";
    cin >> mhs.nilai.tugas;
    cout << "Masukkan Nilai UTS : ";
    cin >> mhs.nilai.uts;
    cout << "Masukkan Nilai UAS : ";
    cin >> mhs.nilai.uas;

    // Hitung nilai akhir dan index huruf
    hitungNilai(mhs.nilai);

    // Simpan data mahasiswa
    data_mahasiswa[jumlah_mahasiswa] = mhs;
    jumlah_mahasiswa++;
    cout << "Data berhasil ditambahkan.\n";
}

//Fungsi untuk mencari indeks data mahasiswa berdasarkan NPM//
int cariIndeks(string npm) {
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        if (data_mahasiswa[i].npm == npm)
            return i;
    }
    return -1;
}

//Fungsi untuk mengedit data mahasiswa//
void editData() {
    string npm;
    cout << "Masukkan NPM mahasiswa yang ingin diubah : ";
    cin >> npm;

    int indeks = cariIndeks(npm);
    if (indeks == -1) {
        cout << "Mahasiswa dengan NPM tersebut tidak ditemukan.\n";
        return;
    }

    Mahasiswa &mhs = data_mahasiswa[indeks];
    cout << "Masukkan Nama Baru : ";
    cin.ignore();
    getline(cin, mhs.nama);
    cout << "Masukkan Nilai Absen Baru : ";
    cin >> mhs.nilai.absen;
    cout << "Masukkan Nilai Tugas Baru : ";
    cin >> mhs.nilai.tugas;
    cout << "Masukkan Nilai UTS Baru : ";
    cin >> mhs.nilai.uts;
    cout << "Masukkan Nilai UAS Baru : ";
    cin >> mhs.nilai.uas;

    //Hitung nilai akhir dan index huruf//
    hitungNilai(mhs.nilai);

    cout << "Data berhasil diubah.\n";
}

//Fungsi untuk menghapus data mahasiswa//
void hapusData() {
    string npm;
    cout << "Masukkan NPM mahasiswa yang ingin dihapus : ";
    cin >> npm;

    int indeks = cariIndeks(npm);
    if (indeks == -1) {
        cout << "Mahasiswa dengan NPM tersebut tidak ditemukan.\n";
        return;
    }

    for (int i = indeks; i < jumlah_mahasiswa - 1; ++i) {
        data_mahasiswa[i] = data_mahasiswa[i + 1];
    }
    jumlah_mahasiswa--;

    cout << "Data mahasiswa berhasil dihapus.\n";
}

int main() {
    char opsi;
    do {
        cout << "\nMenu :\n";
        cout << "1. Input Data Mahasiswa\n";
        cout << "2. Tampilkan Data Mahasiswa\n";
        cout << "3. Edit Data Mahasiswa\n";
        cout << "4. Hapus Data Mahasiswa\n";
        cout << "5. Keluar\n";
        cout << "Pilih operasi yang diinginkan : ";
        cin >> opsi;

        switch (opsi) {
            case '1':
                inputData();
                break;
            case '2':
                tampilkanData();
                break;
            case '3':
                editData();
                break;
            case '4':
                hapusData();
                break;
            case '5':
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (opsi != '5');

    //menampilkan nama dan npm//
    cout << "Nama : Riva Sestia Praba" << endl;
    cout << "NPM : 2310631170045" << endl;

return 0;
}
