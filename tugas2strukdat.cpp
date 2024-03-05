#include <iostream>
#include <string>

using namespace std;

int compress(char* huruf, int panjang){ //function untuk mengompress//
    if(panjang == 0) //pengkondisian atau perbandingan//
        return 0; //mengembalikan nilai//

    int t = 0, p = 0; //pengenalan variabel//

    for(int i = 0; i < panjang; ++i){ //perulangan atau looping panjang array//
        if(i+1 == panjang || huruf[i+1] != huruf[i]){ //pengkondisian untuk mengompress//
            huruf[p++] = huruf[t];
            if(i > t){
                string count = to_string(i - t + 1); //operasi atau perhitungan untuk pengompresan//
                for(char c : count){ //perulangan atau looping pengompresan//
                    huruf[p++] = c;
                }
            }
            t = i + 1; //operasi untuk membantu pengompresan//
        }
    }

    return p; //pengembalian//
}

int main(){ //function//
    cout << "Masukkan panjang array : "; //menampilkan panjang array yang akan dimasukkan//
    int panjang; //input panjang array harus berupa angka//
    cin >> panjang; //untuk memasukkan panjang array yang kita inginkan//
    char *huruf = new char[panjang];

    cout << "Masukkan elemen array : "; //untuk menampilkan elemen array yang ingin dimasukkan//
    for(int a = 0; a < panjang; ++a){ //perulangan atau looping untuk elemen arraynya//
        cin >> huruf[a]; //untuk memasukkan elemen array yang kita inginkan//
    }

    int new_length = compress(huruf, panjang); //pengenalan variabel untuk mengompress//
    cout << "Hasil setelah terkompresi : "; //menampilkan hasil setelah terkompresi//
    for(int a = 0; a < new_length; ++a){ //perulangan atau looping untuk menampilkan hasil yang sudah terkompresi//
        cout << huruf[a] << " "; //menampilkan hasil yang sudah terkompresi//
    }
    cout << endl; //menampilkan garis baru//

    delete[] huruf;
    return 0;
}
