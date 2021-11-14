#include <iostream>
#include <string>
using namespace std;

int main() {
  long long n;
  cin >> n;
  bool check[n + 1];
  memset(check, 0, n+1);
 
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