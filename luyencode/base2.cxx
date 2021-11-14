#include <iostream>
#include <cmath>
using namespace std;

long long dem(long long d = 0) {
	if(d == 0) return 1;
	return floor(log10(d)) + 1;
}

int main(){
	long long a, b;
	cout << "Nhập a, b: ";
	cin >> a >> b;
	long long product = a*b;
	long long dema = dem(a);
	long long demb = dem(b);
	string le1, le2;
	le1 = string(demb, ' ');
	le2 = string(dema, ' ');
	cout << le1 << a << "\nx\n" << le2 << b << endl;
	cout << string(dema + demb, '-') << endl;
	for(int i = 0; i < demb; i++){
		long long p = a*(b/((long) pow(10, i)) % 10);
		cout << string(dema + demb - dem(p) - i, ' ') << p <<  endl;
	}
	cout << string(dema + demb, '-') << endl;
	cout << string(dema + demb - dem(product), ' ') << product << endl;
	return 0;
}