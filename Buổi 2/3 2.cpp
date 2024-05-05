#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "|";
	string p = "";
	int cnt = 0;
	int n, m; cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < m - 1; j++){
			p = "";
			p = p + "|" + char(a[i][j] + 48) + " " +  char(a[i][j + 1] + 48)
				+ " " + char(a[i + 1][j] + 48) + " " + char(a[i + 1][j + 1] + 48);
			if (s.find(p) < 0 || s.find(p) > s.length() - 1){
				cnt++;
				s = s + p;
			}
		}
	}
	cout << cnt;
}