#include <iostream>

using namespace std;

int main() {
	int count, row, aster, temp;
	cout << "Enter the number of rows: ";
	cin >> count;
	temp = count;
	for (count; count > 0; count--) {
		for (row = count; row < (temp * 2) - 1; row++) {
			cout << " ";
		}
		for (aster = 0; aster < (count * 2) - 1; aster++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
