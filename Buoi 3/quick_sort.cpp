void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int a, int l, int r){
	int pv = a[l + (r - l) / 2];
	int i = l - 1;
	
	for (int j = l; j <= r - 1; j++){
		if (a[j] < pv){
			i++;
			swap(&a[i], &a[j]);
		}
	}
	
	swap(&a[i + 1], &a[r]);
	return i + 1;
}

void sort(int a, int l, int r){
	if (l < r){
		int pv = partition(a, l, r);
		sort(a, l, pv - 1);
		sort(a, pv + 1, r);
	}
}