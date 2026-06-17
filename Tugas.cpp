#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int idKendaraan;
    string namaKendaraan;

public:
    Kendaraan();                                   // Constructor tanpa parameter (default)
    Kendaraan(int iId);                             // Constructor hanya dengan id
    Kendaraan(string iNama);                        // Constructor hanya dengan nama
    Kendaraan(int iId, string iNama);                // Constructor dengan parameter lengkap
    void tampilkanInfo();
};

// Constructor tanpa parameter, beri nilai default
Kendaraan::Kendaraan() {
    idKendaraan = 0;
    namaKendaraan = "Tidak Diketahui";
}

// Constructor hanya dengan id
Kendaraan::Kendaraan(int iId) {
    idKendaraan = iId;
    namaKendaraan = "Tidak Diketahui";
}

// Constructor hanya dengan nama
Kendaraan::Kendaraan(string iNama) {
    idKendaraan = 0;
    namaKendaraan = iNama;
}

// Constructor dengan parameter lengkap
Kendaraan::Kendaraan(int iId, string iNama) {
    idKendaraan = iId;
    namaKendaraan = iNama;
}

void Kendaraan::tampilkanInfo() {
    cout << "ID Kendaraan   : " << idKendaraan << endl;
    cout << "Nama Kendaraan : " << namaKendaraan << endl;
    cout << "------------------------" << endl;
}

int main() {
    Kendaraan k1;                          // Constructor default
    Kendaraan k2(101);                     // Constructor hanya id
    Kendaraan k3("Avanza");                // Constructor hanya nama
    Kendaraan k4(202, "Innova");           // Constructor lengkap

    cout << "Data Kendaraan 1 (Default):" << endl;
    k1.tampilkanInfo();

    cout << "Data Kendaraan 2 (Hanya ID):" << endl;
    k2.tampilkanInfo();

    cout << "Data Kendaraan 3 (Hanya Nama):" << endl;
    k3.tampilkanInfo();

    cout << "Data Kendaraan 4 (Lengkap):" << endl;
    k4.tampilkanInfo();

    return 0;
}