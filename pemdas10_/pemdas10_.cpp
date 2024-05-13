#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static long long int nim;
	long int id;
	string nama;

	void setID();
	void printAll();
	mahasiswa(string pnama){
		nama = pnama;
		setID();
	}
};
long long int mahasiswa::nim = 20230140138;

void mahasiswa::setID(){
	id = ++nim;
}

void mahasiswa::printAll(){
	cout << "ID    =" << id << endl;
	cout << "nama    =" << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("lia Kurnia");
	mahasiswa mhs2("Asroni");
	mahasiswa mhs3("Andi Kurniawan");
	mahasiswa mhs4("Joko purbo");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	return 0;
}