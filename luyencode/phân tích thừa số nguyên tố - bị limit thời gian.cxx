#include <iostream>
#include <math.h>
using namespace std;
void printPrimeFactors(long long n) {
	int o = 0;
   while (n%2 == 0){
      n /= 2;
      o++;
   }
   if (o > 0) cout << 2 << " " << o << endl;
   for (long long i = 3; i <= sqrt(n); i += 2){
   	o = 0;
      while (n%i == 0){
         n /= i;
         o++;
      }
      if (o > 0) cout << i << " " << o << endl;
   }
   if (n > 2) cout << n << " " << 1 << endl;
}

int main() {
	long long n;
	cin >> n;
	printPrimeFactors(n);
	return 0;
}