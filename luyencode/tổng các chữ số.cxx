#include <iostream>
using namespace std;

unsigned long long n;
int main() {
	//cin >> n;
	n = 10E18;
	cout << n << endl;
	int s = 0;
	while (n != 0) {
		s += n %10;
		n /=10;
	}
	cout << s;
}