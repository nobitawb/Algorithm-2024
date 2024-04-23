#include <bits/stdc++.h>
using namespace std;

int last0(int n){
    int cnt = 0;
    for (int i =  5; n / i >= 1; i *= 5){
        cnt += n / i;
    }
    return cnt;
}

int lastdif0(int n){
    long long res = 1;
    for (int i = 2; i <= n; i++){
        res *= i;
        while (res % 10 == 0)
            res /= 10;
        res %= 100;
    }
    while (res % 10 == 0)
        res /= 10;
    return res % 10;
}

int main(){
    int n; cin >> n;
    cout << lastdif0(n);
}
