#include <iostream>
using namespace std;

int main() {
  long long n;
  n = 100;
  //cin >> n;
  int check[100 + 1] = {0};
  for (int i = 2; i <= n; i++) {
    if (check[i] == 0) {
      for (int j = 2 * i; j <= n; j += i) {
        check[j] = 1;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
  	if (check[i] == 0) cout << i << " ";
  }
}