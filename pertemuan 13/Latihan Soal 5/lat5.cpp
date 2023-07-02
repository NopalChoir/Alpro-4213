#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string Merk;
    string Type;
    int Tahun;
    string Harga;
};

int main() {
    Sepeda sepeda;
    Sepeda* ptrSepeda = &sepeda;

    // Mengisi nilai member menggunakan pointer
    ptrSepeda->Merk = "Polygon";
    ptrSepeda->Type = "Sepeda Gunung";
    ptrSepeda->Tahun = 2013;
    ptrSepeda->Harga = "2.000.000";

    // Mengakses nilai member menggunakan pointer
    cout << "Merk: " << ptrSepeda->Merk << endl;
    cout << "Type: " << ptrSepeda->Type << endl;
    cout << "Tahun: " << ptrSepeda->Tahun << endl;
    cout << "Harga: " << ptrSepeda->Harga << endl;

    return 0;
}
