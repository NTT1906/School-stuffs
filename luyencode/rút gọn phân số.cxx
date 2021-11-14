#include <iostream>
​
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (b == 0) cout << "INVALID" << endl;
    else {
        if (a % b == 0) cout << a/b;
        else {
			int new_a = 1*a;
            int new_b = 1*b;
            int tmp = a;
            
            while(b != 0) {
                tmp = a % b;
                a = b;
                b = tmp;
            }
            cout << new_a / a << " " << new_b / a;
        }
    }
    return 0;
}