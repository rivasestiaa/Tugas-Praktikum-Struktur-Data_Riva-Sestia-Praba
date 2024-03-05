#include <iostream>
using namespace std;

int main(){
    //pendeklarasian variabel//
    int matrixA[2][2];
    int matrixB[2][2];

    //memasukkan nilai matrix A//
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Masukkan nilai dari matrix A = [" << i << "][" << j << "] : ";
            cin >> matrixA[i][j];
        }
    }
    //menampilkan matrix A//
    cout << "Matrix A : " << endl;

    //menampilkan nilai matrix A//
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    //memasukkan nilai matrix B//
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Masukkan nilai dari matrix B = [" << i << "][" << j << "] : ";
            cin >> matrixB[i][j];
        }
    }
    //menampilkan matrix B//
    cout << "Matrix B : " << endl;

    //menampilkan nilai matrix B//
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    //pendeklarasian variabel hasil atau matrix C//
    int matrixC[2][2];
    //inisialisasi matrix C = 0//
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
        matrixC[i][j] = 0;
    }
}
    //menampilkan perkalian matrix A dan matrix B//
    cout << "Matrix C : matrix A * matrix B = " << endl;
    //operasi perkalian matrix A dan matrix B//
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
                for (int k = 0; k < 2; k++){
                   matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            //menampilkan hasil perkalian dari matrix A dan matrix B sebagai matrix C//
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Nama    :    Riva Sestia Praba" << endl;
    cout << "NPM     :    2310631170045" << endl;
    
return 0;
}
