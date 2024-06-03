#include <bits/stdc++.h>

using namespace std;

bool isValid(string s){
	stack<char> st;
	for (char c : s){
		if (c == '(' || c == '[')
			st.push(c);
		else if (c == ')' || c == ']'){
			if (st.empty())
				return false;
			char top = st.top();
			if ((c == ')' && top == '(') || (c == ']' && top == '['))
				st.pop();
			else
				return false;
		}
	}
	return st.empty();
}

int main(){
	string s;
	getline(cin, s);
	while (s != "."){
		if (isValid(s))
			cout << "yes\n";
		else
			cout << "no\n";
		getline(cin, s);
	}
}