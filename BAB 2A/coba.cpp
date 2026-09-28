#include <iostream>
using namespace std;

int main() {
    const float phi = 3.14;
    float r, luas, keliling;

    cout << "======================================\n";
    cout << " KALKULATOR LUAS & KELILING LINGKARAN \n";
    cout << "======================================\n\n";

    cout << "Masukkan jari-jari lingkaran (r) : ";
    cin >> r;

    luas = phi * r * r;
    keliling = 2 * phi * r;

    cout << "\n---------------------------------------" << endl;
    cout << "HASIL PERHITUNGAN" << endl;
    cout << "Luas Lingkaran     = " << phi << " * " << r << " * " << r << " = " << luas << endl;
    cout << "Keliling Lingkaran = " << " 2 * " << phi << " * " << r << " = " << keliling << endl;
    cout << "---------------------------------------" << endl;

    return 0; 
}
