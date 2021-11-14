#include <iostream>
#include <ctime>
using namespace std;

auto factor1(long long n) {
    clock_t start;
    double duration;
    start = clock();
    long long z = 2;
    int o = 0;
    while (z * z <= n) {
        if (n % z == 0) {
            n /= z;
            o++;
        } else {
            cout << z  << " " << o << endl; 
            o = 0;
            z++;
        }
    }
    if (n > 1) {
       cout << n << " " << 1 << endl;
    }
    duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
    return duration;
}

int main() {
	long long n;
	cin >> n;
	double time = 0;
	time = factor1(n);
	cout << "T1: " << time << endl;
	return 0;
}