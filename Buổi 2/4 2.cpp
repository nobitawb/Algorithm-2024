#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int max = a[0];
	int cur = a[0];
	int st = 0, ed = 0;
	int cur_start = 0;
	for (int i = 1; i < n; i++){
		if (cur < 0){
			cur = a[i];
			cur_start = i;
		}
		else {
			cur += a[i];
		}
		if (cur > max){
			max = cur;
			st = cur_start;
			ed = i;
		}
	}
	cout << st + 1 << " " << ed + 1 << " " << max;
}