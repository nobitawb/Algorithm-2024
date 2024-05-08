#include <bits/stdc++.h>
using namespace std;

#define du 1000000007

long long fibo(int n){
	if (n <= 1)
		return n;
	return (fibo(n - 1) % du + fibo(n - 2) % du) % du;
}

int main(){
	int n; cin >> n;
	cout << fibo(n);
}