#include<iostream>
using namespace std;

int main() {

    float phi = 3.14;
    float jari, luas, volume;

    cout << "\t Hitung Luas dan Volume Bola \n\n";

    cout << " Masukkan Jari-jari : ";
    cin >> jari;

    luas = 4 * phi * jari * jari;
    cout << "\n Luas dari Bola   : " << luas;

    volume = 4 / (float)3 * phi * jari * jari * jari;
    cout << "\n Volume dari Bola : " << volume;
}