#include <bits/stdc++.h>
using namespace std;

int digitsProduct(int pro){
	if (pro == 1)
		return 1;
	if (pro == 0)
		return 0;
	int ans = 0;
	for (int i = 9; i >= 2; i--){
		while (pro % i == 0){
			ans = ans * 10 + i;
			pro /= i;
		}
	}
	int ans2 = 0;
	while (ans > 0){
		ans2 = ans2 * 10 + ans % 10;
		ans /= 10;
	}
	return (pro == 1) ? ans2 : -1;
}

int main(){
	int n; cin >> n; 
	cout << digitsProduct(n);
}