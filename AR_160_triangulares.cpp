#include <iostream>
using namespace std;

bool casoDePrueba() {
	short int num;

	cin >> num;
	if (num == 0)
			return false;
	else {
		bool inferior = true, superior = true;

		for (short int i = 0; (i < num); ++i) {
			int n;
			for (short int j = 0; j < i; ++j) {
				cin >> n;
				if (inferior)
					inferior = inferior && n == 0;
			}
			cin >> n;
			for (short int j = i + 1; j < num; ++j) {
				cin >> n;
				if (!inferior || superior)
					superior = superior && n == 0;
				}
			}

			if (inferior || superior)
				cout << "SI" << "\n";
			else
				cout << "NO" << "\n";
		}
			return true;
} 

 

//---------------------------------------------------------

int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main
