#include <bits/stdc++.h>
using namespace std;

int find(vector<int> a, int i, int j){
	int d = a[j] - a[i], cnt = 2;
	for (int x = j + 1; x < a.size(); x++){
		if (a[x] - a[i] == d * cnt)
			cnt++;
	}
	return cnt;
}

int longest(vector<int> a){
	int max = INT_MIN;
	for (int i = 0; i < a.size(); i++){
		for (int j = i + 1; j < a.size(); j++){
			if (max < find(a, i, j))
				max = find(a, i, j);
		}
	}
	return max;
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << longest(a);
}