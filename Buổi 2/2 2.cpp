#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	bool kt = true;
	while (kt && s.length() > 0){
		kt = false;
		if ((s[0] - '0') % 3 == 0){
			s.erase(0, 1);
			kt = true;
		}
		else if ((s[s.length() - 1] - '0') % 3 == 0){
			kt = true;
			s.erase(s.length() - 1, 1);
		}
		else if ((s[0] + s[s.length() - 1] - 96) % 3 == 0){
			kt = true;
			s.erase(s.length() - 1, 1);
			s.erase(0, 1);
		}
	}
	cout << s;
}