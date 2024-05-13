#include <iostream>
#include<string>
using namespace std;

class Mahasiswa {
public:
	int Nim;
	string Nama;
public:
	Mahasiswa() {
		Nim = 0;
		Nama = "";
	};
	Mahasiswa(int iNim) {
		Nim = 0;
		Nim = iNim;
	}
	Mahasiswa(string iNama) {
		Nama = iNama;
	}
	Mahasiswa(int iNim, string iNama) {
		Nim = iNim;
		Nama = iNama;
	}
	void cetak() {
		cout << endl << "Nim   =" << Nim << endl;
		cout << " Nama  =" << Nama << endl;
	}
};

int main() {
	Mahasiswa mhs1;
	Mahasiswa mhs2(20);
	Mahasiswa mhs3("Saddam Hussein");
	Mahasiswa mhs4(20, "Icikiwir");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;

}

