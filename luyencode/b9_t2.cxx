#include <iostream>
#include <string>
using namespace std;

int main() {
	int T, s;
	cin >> T;
	string n[T+1], temp;
	for (int i = 1; i <= T; i++) cin >> n[i];
	for (int i = 1; i <= T; i++) {
		s = 0;
		temp = n[i];
		for(int j = 1; j < temp.length(); j++) {
			s += int(temp[j+1]);
			cout << "x";
		}
		cout << s << endl;
	}
	return 0;
}