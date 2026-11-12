#include <iostream>
using namespace std;

int main() {
    int arr[2][3][4];
    int nilai1 = 1;
    int nilai2 = 5;
    int rata = (nilai1 + nilai2) / 2;

    // lapis 1
    for (int lapis = 0; lapis < 1; lapis++){
        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                arr[lapis][baris][kolom] = nilai1;
                nilai1 += 2;
            }
        }
    }

    // lapis 2
    for (int lapis = 1; lapis < 2; lapis++){
        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                arr[lapis][baris][kolom] = nilai2;
                nilai2 += 5;
            }
        }
    }

    // lapis 1
    for (int lapis = 0; lapis < 1; lapis++) {
        cout << "=== Lapis " << lapis + 1 << " ===" << endl;
        
        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                cout << arr[lapis][baris][kolom] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // lapis 2
    for (int lapis = 1; lapis < 2; lapis++) {
        cout << "=== Lapis " << lapis + 1 << " ===" << endl;
        
        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                cout << arr[lapis][baris][kolom] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // lapis 3
    for (int lapis = 0; lapis < 3; lapis++) {
        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                arr[lapis][baris][kolom] = rata;
            }
        }
    }

    for (int lapis = 2; lapis < 3; lapis++) {
        cout << "=== Lapis " << lapis + 1 << " ===" << endl;
        
        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                cout << arr[lapis][baris][kolom] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}