#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, i, j= 1;
    long long arr[10000];
	long long temp;

	cin >> n;

	for (i=0; i<n; i++) cin>>arr[i];

	/* for(i=0; i<n; ++i) for(j = i+1; j<n; ++j) {
		if(arr[i] > arr[j]) {
		    temp  =arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}*/
	sort(arr, arr+n); // i MEAN, wHy NoT :>

	cout<< max(arr[0] * arr[1] * arr[n-1], arr[n-1] * arr[n-2] * arr[n-3]) << endl;
    return 0;
}
