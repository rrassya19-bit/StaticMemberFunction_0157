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

int main() {
    return 0;
}