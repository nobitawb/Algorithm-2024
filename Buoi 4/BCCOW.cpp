#include <bits/stdc++.h>

using namespace std;

int stop = 0;

void sinh(int a[], int n){
	int i = n - 1;
	while (i >= 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if (i == -1)
		stop = 1;
	else
		a[i] = 1;
}

int main(){
	int n, c; cin >> c >> n;
	int max = 0;
	int w[n], a[n] = {0};
	for (int i = 0; i < n; i++)
		cin >> w[i];
	while (stop == 0){
		sinh(a, n);
		int s = 0;
		for (int i = 0; i < n; i++)
			if (a[i] == 1)
				s += w[i];
		if (s <= c && s > max)
			max = s;
	}
	cout << max;
}