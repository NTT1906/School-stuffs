#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, i, temp, u, Max, a[100000 + 1];
    long long b[100000 + 1] = {0};
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> temp;
        a[i] = temp;
        b[temp]++;
    }
    Max = b[a[0]];
    u =0;

    for (i = 1; i <= n; i++) {
        if (b[a[i]] > Max) {
            Max = b[a[i]];
            u = i;
        }
    }

    cout << a[u] << " " << Max;


    return 0;
}
