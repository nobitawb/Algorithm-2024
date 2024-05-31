#include <bits/stdc++.h>

using namespace std;

void ptich(int a, int b){
	if (a == 0 || b == 0)
		return;
	if (b % a == 0){
		cout << a << ' ' << b / a;
		return;
	}
	
	int x = b / a + 1;
	cout << 1 << ' ' << x << endl;
	ptich(a * x - b, b * x);
}
int main(){
	int a, b; cin >> a >> b;
	 ptich(a, b);
}