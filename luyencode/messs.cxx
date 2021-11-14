#include <iostream>
#include <cmath>
using namespace std;
int a, b; //, S = 0;
int main()
{
	cin >> a >> b;
	if (a*b < 0) a = -a;
	if (abs(a) % 2 == 1) a++;
	if (abs(b) % 2 == 1) b--;
	/**for(int i = a; i <= b; i+=2) {
		cout << i << " ";
		S+= i;
	}*/
	
	int x = (abs(a - b) / 2.0) - 1;
	//cout << x << endl;
	cout << (a+b)*((b - a - x)/2.0);
	//cout << S;
	return 0;
}