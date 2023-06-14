#include <iostream>
#include <vector>
using namespace std;

class penerbit;
class pengarang
{
public:
	string joko, lia, giga;
	vector<penerbit*> daftar_penerbit;
	pengarang(string pJoko) :joko(pJoko) {
		cout << "Pengarang \"" << joko, lia,giga  << "\" ada\n";
	}
	~pengarang() {
		cout << "pengarang \"" << joko, lia, giga << "\" tidak ada \n";
	}
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

class penerbit {
public:
	string gamepress;
	vector<pengarang*> daftar_pengarang;

	penerbit(string pGamepress) :gamepress(pGamepress) {
		cout << "Penerbit \"" << gamepress << "\" ada \n";
	}
	~penerbit() {
		cout << "Penerbit \"" << gamepress << "\" tidak ada \n";
	}

	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

void pengarang::tambahPenerbit(penerbit* pGamepress) {
	daftar_penerbit.push_back(pGamepress);
}
void pengarang::cetakPenerbit() {
	cout << "Daftar Penerbit yang membuat buku \"" << this->Gamepress << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->Gamepepress << "\n";
	}
	cout << endl;
}
void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
	pPengarang->tambahPenerbit(this);
}
void penerbit::cetakPengarang() {
	cout << "Daftar Pasien dari dokter \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
int main() {
	penerbit* varpenerbit1 = new penerbit("dr.Budi");
	penerbit* varpenerbit2 = new penerbit("dr.Tono");
	pengarang* varPengarang1 = new pengarang("Andi");
	pengarang* varPengarang2 = new pengarang("Lia");

	varpenerbit1->tambahPengarang(varPengarang2);
	varpenerbit2->tambahPengarang(varPengarang1);

	varpenerbit1->cetakPengarang();
	varpenerbit2->cetakPengarang();
	varPengarang1->cetakPenerbit();
	varPengarang2->cetakPenerbit();

	delete varPengarang1;
	delete varPengarang2;

	return 0;
}