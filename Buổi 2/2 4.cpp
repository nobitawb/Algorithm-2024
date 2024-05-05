#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int cnt[200] = {0};
	for (int i = 0; i < s.length(); i++)
		cnt[s[i]]++;
	for (int i = 'a'; i <= 'z'; i++)
		if (cnt[i] > 1)
			cout << (char)i << ' ';
}