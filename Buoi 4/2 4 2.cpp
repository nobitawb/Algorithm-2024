#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t; cin >> n >> t;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, greater<int>());

	int res = 0;
	for (int i = 0; i < n; i++)
		if (t >= a[i]){
			t -= a[i];
			++res;
		}
	if (t == 0)
		cout << res;
	else
		cout << -1;
}