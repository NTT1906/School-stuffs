#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double xa, xb, xc, ya, yb, yc, ha, hb, hc;
double a, b, c, S, p;
int main() {
	cin >> xa >> ya >> xb >> yb >> xc>> yc;
	c = sqrt(pow(xb - xa,2) + pow(yb - ya, 2));
	b = sqrt(pow(xc - xa,2) + pow(yc - ya, 2));
	a = sqrt(pow(xc - xb,2) + pow(yc- yb, 2));
	p = (a+b+c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	ha = 2*S/a;
	hb = 2*S/b;
	hc = 2*S/c;
	cout << setprecision(6) << fixed;
	cout << S << endl;
	cout << ha << endl << hb << endl;
	cout << hc << endl;
	return 0;
}