#include <iostream>
using namespace std;

int main() {
	int l, r, s, p;
	cin >> l >> r;
	p = 0;
	//Số vui vẻ là số chính phương
	for (int i = l+1; i < r; i++) {
		if (int(sqrt(i))*int(sqrt(i)) == i) p++;
	}
	cout << p;
	return 0;
}