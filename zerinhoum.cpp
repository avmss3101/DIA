#include<iostream>

using namespace std;

int main() {
	string a, b, c;

	while (cin >> a >> b >> c) {
		if ((a.compare("0") && b.compare("1") && c.compare("1")) || (a.compare("1") && b.compare("0") && c.compare("0")))
			cout << "A\n";
		if ((a.compare("1") && b.compare("0") && c.compare("1")) || (a.compare("0") && b.compare("1") && c.compare("0")))
			cout << "B\n";
		if ((a.compare("1") && b.compare("1") && c.compare("0")) || (a.compare("0") && b.compare("0") && c.compare("1")))
			cout << "C\n";
		if ((a.compare("1") && b.compare("1") && c.compare("1")) || (a.compare("0") && b.compare("0") && c.compare("0")))
			cout << "*\n";
	}
	
	return 0;
}
