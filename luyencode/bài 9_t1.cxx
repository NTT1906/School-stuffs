#include <iostream>
using namespace std;

int main() {
	int T, s;
	cin >> T;
	unsigned long long n[T+1], temp;
	for (int i = 1; i <= T; i++) cin >> n[i];
	for (int i = 1; i <= T; i++) {
		s = 0;
		temp = n[i];
		while(temp != 0) {
			s += temp % 10;
			temp /= 10;
		}
		cout << s << endl;
	}
	return 0;
}