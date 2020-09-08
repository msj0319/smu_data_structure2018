
index binary_search_recursive(Array arr, index s, index e, elt x) {
	//예외처리 : 원소가 한개인 경우
	if (s ==e) {
		return (arr[s] == x) ? s:-1;
	}
	int mid = (s+e)/2; 
	printf("%d \n", mid);
	
	if (x == arr[mid]) {
		return mid;
	}
	//O(1)

	else if (arr[mid] > x) { //divide O(T/2)
		return binary_search(arr, s, mid-1, x);
	}
	else //divide O(T/2)
		return binary_search(arr, mid+1, e, x);
}

//최악의 경우 : O(logN)
//최선의 경우 : O(1) -> mid == x

>> 출력은 mid값이기 때문에
>> input: 20, 42, 55, 62, 78, 92, 112, 132, 140, 145, 150, 170
>> output: 112, 145, 132

index binary_serch_iterative(Array arr, elt x){
	int s = 0;
	int e = count -1;
	int mid;

	while (s<=e) {
		mid = (s+e) /2;
		if (x == arr[mid]) {
			return mid;
		}
		else if (arr[mid] > x) {
			e = mid -1;
		}
		else
			s = mid +1;
	}
	return -1;
}