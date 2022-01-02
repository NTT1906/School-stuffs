#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, i;
    long long a[100000];
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    while(a[n-1] == a[n-2]) {
        n--;
        if (n < 2) {
            cout << "NOT FOUND";
            return 0;
        }
    }
    if (n >= 2) cout << a[n-2];
    return 0;
}
