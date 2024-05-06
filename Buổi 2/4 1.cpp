#include <bits/stdc++.h>
using namespace std;

int find(int a[], int l, int r, int x){
    if (l <= r){
        int mid = (l + r) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return find(a, l, mid - 1, x);
        return find(a, mid + 1, r, x);
    }
    return -1;
}

int main(){
    int n, x; cin >> n >> x; 
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (find(a, 0, n - 1, x) == -1)
        cout << "false";
    else
        cout << "true";
}
