#include <iostream>
using namespace std;

//fungsi untuk memutar matriks 90 derajat//
void rotateMatrix(int matrix[3][3]){
    //pendeklarasian matriks untuk menyimpan hasil rotasi//
    int putarMatrix[3][3];

    //looping atau perulangan untuk memutar matriks//
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            putarMatrix[j][2 - i] = matrix[i][j];
        }
    }

    //menampilkan matriks yang telah diputar//
    cout << "Matriks setelah diputar : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << putarMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    //pendeklarasian variabel matrix//
    int matrix[3][3];

    //memasukkan nilai matrix//
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Masukkan nilai dari matriks [" << i <<"] [" << j << "] : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    //metampilkan matriks sebelum diputar//
    cout << "Matriks sebelum diputar : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //memutar matriks 90 derajat sekali//
    rotateMatrix(matrix);

    cout << "Nama    :    Riva Sestia Praba" << endl;
    cout << "NPM     :    2310631170045" << endl;

return 0;
}
