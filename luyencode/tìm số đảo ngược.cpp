#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    n.erase(0, min(n.find_first_not_of('0'), n.size()-1));
    cout << n;
    return 0;
}
