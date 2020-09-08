
index linear_search(Array arr, elt x){
	for (int i=0; i<n; i++) {
		if (arr[i] == x) {
			return i;
		}
		else
			return -1;
	}
}

//최악의 경우: O(n)
//평균의 경우: O(n/2)
//최선의 경우: O(1)