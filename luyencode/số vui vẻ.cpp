#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, i, sum = 0;
    cin >> n;
    for(i=1; i<=n/2; ++i) {
        if(n%i==0) sum+=i;
    } 
    if(sum==n) cout << "YES";
    else cout << "NO";

return 0; }
