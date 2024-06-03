#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int i = 0;
	while (1){
		long long p = pow(2, i);
		long long t = 5 * p;
		if (n >= t){
			n -= t;
			i++;
		}
		else{
			cout << (n / p) + 1;
			break;
		}
	}
}