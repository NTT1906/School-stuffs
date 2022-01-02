#include <bits/stdc++.h>
using namespace std;
// This should be using array but meh, i finished it ^^
int main() {
    long long n, i, temp, Max, Min, Pmax, Pmin;
    cin >> n;
    Max = INT_MIN;
    Min = INT_MAX;
    Pmin = 1;
    Pmax = n;
    for (i = 0; i < n; i++) {
        cin >> temp;
        if (temp > Max) {
            Max = temp;
            Pmax = i + 1;
        }
        if (temp < Min) {
            Min = temp;
            Pmin = i + 1;
        }

        if (Min == Max) {
            Pmin = min(Pmin, Pmax);
            Pmax = Pmin;;
        }
    }
    cout << Min << " " << Pmin << " " << Max << " " << Pmax;
    return 0;
}
