void selection(int a[], int n){
	for (int i = 0; i < n - 1; i++){
		int min = i;
		for (int j = i + 1; j < n; j++){
			if (a[j] < a[i]){
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}