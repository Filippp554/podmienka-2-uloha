#include <iostream>
using namespace std;

int main() {
	const string google = "okgoogle";
	const string siri = "heysiri";

	int hlas;
	hlas = 0;

	string prikaz;
	cin >> prikaz;

	if (prikaz == google || prikaz == siri) {
		cout << "Zadal si spravny prikaz" << endl;
		cout << "Zadaj hlasitost" << endl;
	}
	else {
		cout << "chybny prikaz" << endl;
	}
	cin >> hlas;
	if (hlas <= 100) {
		cout << "Zvysujem hlasitost na " << hlas << endl;
	}
	else {
		cout << "Chybny prikaz" << endl;
	}


}