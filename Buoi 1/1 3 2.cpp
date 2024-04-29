#include <bits/stdc++.h>
using namespace std;

string digitsProduct(int pro){
	if (pro == 1)
		return "1";
	if (pro == 0)
		return "0";
	string ans = "";
	for (int i = 9; i >= 2; i--){
		while (pro % i == 0){
			string s0 = to_string(i);
			ans += s0;
			pro /= i;
		}
	}
	reverse(ans.begin(), ans.end());
	return (pro == 1) ? ans : "-1";
}

int main(){
	int n; cin >> n; 
	cout << digitsProduct(n);
}