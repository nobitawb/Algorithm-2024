void insertion(int a[], int n){
	for (int i = 1; i < n; i++){
		int gt = a[i];
		int j = i--;
		while (j >= 0 & a[j] > gt){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = gt;
	}
}