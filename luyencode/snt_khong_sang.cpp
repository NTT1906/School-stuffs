#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n, i, u(0), j, temp = 0;
    long long a[100000], b[100000] = {0};
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> temp;
        if (isPrime(temp) && b[temp] != 1) {
            a[u] = temp;
            b[temp] = 1;
            u++;
        }
    }

    sort(a, a + u);

    for (j = 0; j < u; j++) cout << a[j] << " ";
    return 0;
}
