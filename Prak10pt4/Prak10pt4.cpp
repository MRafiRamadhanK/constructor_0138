#include <iostream>
using namespace std;

class Angka {
private:
	int* arr;
	int panjang;
public:
	Angka(int);
	~Angka();
	void cetakData();
	void isiData();
};

Angka::Angka(int i) {
	panjang = i;
	arr = new int[i];
	isiData();
}

Angka :: ~Angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat array sudah dilepaskan" << endl;
}

void Angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "<< arr[i] << endl;
	} 
}

void Angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[i];
	}
	cout << endl;
}

int main() {
	Angka belajarCpp(3);
	Angka* ptrBelajarCpp = new Angka(5);
	delete ptrBelajarCpp;
	return 0;
}