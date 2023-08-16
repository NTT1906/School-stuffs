#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double m;
    cin >> m;
    if (m < 0) {
        n = m - 0.5;
    } else {
        n = m + 0.5;
    }
    
    cout << n << "\n";
    return 0;
}
