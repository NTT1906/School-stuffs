#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, i, Min, step;
    cin >> n;
    Min = n/3;

    for (i=0; i <= n/3; i++){
        if ((n - i*3) % 5 == 0){
            step = i + (n - i*3)/5;
            if (step < Min) Min = step;
        }
    }
    if (n % 3 != 0 && Min == n/3) cout << "-1";
    else cout << Min;
    return 0;
}
