#include <iostream>
using namespace std;

int main() {
	unsigned long long n, temp, s;
	cin >> n;
	cout << n << endl;
	for (; n > 9;) {
		temp = n;
		s = 0;
		for (int i = 1; i <= 10; i++) {
			s+= temp%10;
			temp /= 10;
		}
		n = s;
	}
	/**while (n > 10) {
		temp = n;
		while (temp != 0) {
			s = temp % 10;
			temp \= 10; 
		}
		n = s;
	}*/
	cout << n;
	return 0;
}