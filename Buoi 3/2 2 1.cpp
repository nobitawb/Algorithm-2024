#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int j = 0;
	int a[n], b[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] != -1){
			b[j] = a[i];
			j++;
		}
	}
	sort(b, b + j);
	j = 0;
	for (int i = 0; i < n; i++){
		if (a[i] == -1)
			cout << a[i];
		else{
			cout << b[j] << ' ';
			j++;
		}
	}
}