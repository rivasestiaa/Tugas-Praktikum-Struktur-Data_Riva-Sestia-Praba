#include <iostream> //untuk membuat codenya agar terbaca//
using namespace std;

int main (){ //function//

    string nama_mahasiswa[10]; //mengenalkan variabel dengan tipe data yang bisa diisi kalimat//
    string* pNama;
    //pNama = nama_mahasiswa;
    pNama = &nama_mahasiswa[0];

    for (int i = 0; i < 10; i++){ //perulangan atau looping untuk urutan nama mahasiswanya//
        cout << "Masukkan Nama Mahasiswa ke " << i+1 << " : "; //untuk menampilkan nama mahasiswa yang bisa diisi//
        getline(cin,nama_mahasiswa[i]); //untuk mengisi nama mahasiswa dengan spasi//
        cout << endl;
    }

    for (int i = 0; i < 10; i++){ //perulangan atau looping urutannya//
        cout << "Nama Mahasiswa ke " << i+1 << " : " << *pNama << endl; //untuk memanggil kembali dan menampilkan nama mahasiswanya//
        cout << "Alamat Mahasiswa di komputer : " << pNama << endl; //untuk menampilkan alamat mahasiswa pada komputer//
        pNama++; //supaya pemanggilannya looping sampai akhir//
        cout << endl;
    }

    cout << endl; //untuk menampilkan garis baru//
    cout << "Nama : Riva Sestia Praba" << endl; //untuk menampilkan nama identitas
    cout << "NPM : 2310631170045" << endl; //untuk menampilkan NPM//
    cout << endl;
    
return 0; //untuk membuat code setelah ini kembali dari awal//
}
