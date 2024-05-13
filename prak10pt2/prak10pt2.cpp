#include <iostream>
#include<string>
using namespace std;

class mahasiswa {
private:
	static long long int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNIM(int pnim) { nim = pnim; }
	static int getnim() { return nim; }

	mahasiswa(string pnama) : nama(pnama) { setID(); }
};

long long int mahasiswa::nim = 20230140138;

void mahasiswa::setID() {
	id = ++nim;
}
void mahasiswa::printAll() {
	cout << "ID     =" << id << endl;
	cout << "nama     =" << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Rafi Ramadhan");
	mahasiswa mhs2("mikhaylo mudryk");
	mahasiswa::setNIM(11);
	mahasiswa mhs3("Chukuwenka");
	mahasiswa mhs4("Axel Disasi");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar objek  = " << mahasiswa::getnim() << endl;
	return 0;
}