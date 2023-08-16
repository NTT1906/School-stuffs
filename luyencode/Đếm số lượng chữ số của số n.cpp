#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    n.erase(0, min(n.find_first_not_of('-'), n.size()-1));
    cout << n.size();
    return 0;
}
