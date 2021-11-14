#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	string s;
	cin.ignore();
	int counts[T];
	for (int i = 0; i < T; i++) {
		getline(cin ,s);
		counts[i] = s[0] == ' ' + s.back() == ' ';
		for (int j = 0; s[j] != '\0'; j++) if (s[j] == ' ') counts[i]++;
	}
	for (int i = 0; i < T; i++) cout << counts[i] << endl;
	return 0;
}