#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n, i, a[100000];
    cin >> n;
    for (i = n - 1; i >= 0; i--) cin >> a[i];
    sort(a, a+n, less<>());
    for (i = n - 1; i >= 0; i--) cout << a[i] << " ";
    return 0;
}
