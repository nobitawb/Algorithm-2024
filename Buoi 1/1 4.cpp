#include <bits/stdc++.h>
using namespace std;

int n;

bool nt[10001];

void sang(int n){
	for (int i = 0; i <= n; i++){
		nt[i] = true;
	}
	nt[0] = nt[1] = false;
	for (int i = 2; i <= sqrt(n); i++){
		if (nt[i] = true){
			for (int j = i * i; j <= n; j += i){
				nt[j] = false;	
			}
		}
	}

}

int sum(int n){
	int mod = 22082018;
	sang(n);
	int s = 0;
	for (int i = 2; i <= n; i++)
		if (nt[i] == true){
			s = (s + i % mod) % mod;
		}
	return s;
}

int main(){
	cin >> n;
	cout << sum(n);
}