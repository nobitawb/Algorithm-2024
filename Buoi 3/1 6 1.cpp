#include <bits/stdc++.h>
using namespace std;

int sum(int n){
	int s = 0;
	while (n > 0){
		s += n % 10;
		n /= 10;
	}
	return s;
}

bool cmp(int a, int b){
	if (sum(a) != sum(b))
		return sum(a) < sum(b);
	return a < b;
}

int main(){
	int n; cin >> n; 
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++)
		cout <<  a[i] << ' ';	
}