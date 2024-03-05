#include <iostream>
#include <string>
using namespace std;

//tipe data konstant atau tetap yang tidak bisa diubah//
const int MIN_HARI = 5;

//function structure lokal untuk menyimpan tipe data yang berbeda//
struct DataBarang {
    string nama;
    int jumlah;
};

//function untuk hanya memasukkan angka//
int main(){
    int jumlahHari;

    //menampilkan jumlah hari yang diinginkan//
    cout << "Masukkan jumlah hari (min. 5 hari) : ";
    cin >> jumlahHari;

    //pengkondisian supaya datanya minimal ada 5 hari//
    if (jumlahHari < MIN_HARI){
        cout << "Jumlah hari tidak mencukupi. Program berhenti." << endl;
        return 1; //kembali ke program pertama//
    }

    //memasukkan nama barang yang diinginkan//
    DataBarang dataPerHari[jumlahHari];
    for (int i = 0; i < jumlahHari; ++i) {
        cout << "Hari " << i + 1 << ":" << endl;
        cout << "Masukkan nama barang : ";
        cin.ignore(); // Membersihkan buffer agar tidak ada masalah saat mengambil string setelah input angka//
        getline(cin, dataPerHari[i].nama); //supaya string yang dimasukkan tidak bermasalah jika lebih dari satu kata//

        //memasukkan jumlah barang yang diinginkan//
        cout << "Masukkan jumlah barang : ";
        cin >> dataPerHari[i].jumlah;
    }

    //menampilkan hasil data akhir//
    cout << "\nData Barang:\n";
    for (int i = 0; i < jumlahHari; ++i) {
        cout << "Hari " << i + 1 << ":" << endl;
        cout << "Nama Barang : " << dataPerHari[i].nama << endl;
        cout << "Jumlah Barang : " << dataPerHari[i].jumlah << endl;
        cout << "Alamat Barang pada Komputer : " << &dataPerHari[i] << endl;
        cout << endl;
    }

    cout << "Nama    :    Riva Sestia Praba" << endl;
    cout << "NPM     :    2310631170045" << endl;
    
return 0; //program kembali ke awal//
}
