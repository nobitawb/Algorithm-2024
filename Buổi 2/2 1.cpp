#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
	string s0 = s;
	reverse(s.begin(), s.end());
	if (s0 == s)
		return true;
	return false;
}
//c1
bool checkpalin[1003][1003];
void buildcheck(string s){
	for (int len = 1; len <= s.length(); len++){
		for (int i = 0; i < s.length(); i++){
			if (len == 1)
				checkpalin[i][i] = 1;
			else if (len == 2 && i < s.length() - 1 && s[i] == s[i + 1])
				checkpalin[i][i + 1] = 1;
			else{
				int j = i + len - 1;
				if (j == s.length())
					break;
				else
					if (s[i] == s[j] && checkpalin[i + 1][j - 1] == 1)
						checkpalin[i][j] = 1;
			}
		}
	}
}
//c2
bool checksub(int l, int r, string s){
	string sub = s.substr(l, r - l + 1);
	string sub0 = sub;
	reverse(sub.begin(), sub.end());
	if (sub0 == sub)
		return true;
	return false;
}

int main(){
	string s; cin >> s;
	buildcheck(s);
}
