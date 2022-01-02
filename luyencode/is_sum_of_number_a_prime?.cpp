#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    long long i;
    if(n < 2) return false;
    for (i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfNum(long long n) {
    int s = 0;
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    long long a, b, i, s;
    cin >> a >> b;
    s = 0;
    for (i = a + 1; i <= b; i++) {
        if (isPrime(sumOfNum(i))) s++;
	}
    cout << s;
	return 0;
}
