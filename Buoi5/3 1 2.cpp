#include <bits/stdc++.h>

using namespace std;

string decodeString(string s){
	stack<char> st;
	for (int i = 0; i < s.size(); i++){
		if (s[i] != ']')
			st.push(s[i]);
		else{
			string cur = "";
			while (st.top() != '['){
				cur = st.top() + cur;
				st.pop();
			}
			st.pop();
			string times;
			while (! st.empty() && isdigit(st.top())){
				times = st.top() + times;
				st.pop();
			}
			int k_times = stoi(times);
			while(k_times--){
				for (int p = 0; p < cur.size(); p++){
					st.push(cur[p]);
				}
			}
		}
	}
	s = "";
	while  (!st.empty()){
		s = st.top() + s;
		st.pop();
	}
	return s;
}

int main(){
	string s;
	getline(cin, s);
	cout << decodeString(s);	
}