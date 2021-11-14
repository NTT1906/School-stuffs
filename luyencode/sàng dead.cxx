#include <iostream>
using namespace std;

unsigned long long n;

int main() {
	cin >> n;
    if(n < 2) cout << "NO"; //return 0;
    int count = 0;
    for(unsigned long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}