
Array insert_by_value(Array arr, elt x) {
// 0. 예외처리
// 원소가 없는 배열에 추가
	if (count == 0) {
		arr[0] = x;
		count ++;
	}
// 가득찬 배열일 때
	if (count == size) {
		printf("가득찬 배열입니다.");
	}
// 가장 작은 원소보다 작은 원소
	if (x < arr[0])	{
		for (i = count -1; i>=1; i--) {
			arr[i+1] = a[i];
		}
		arr[0] = x;
		count ++;
		return arr;
	}
// 가장 큰 원소보다 작은 원소
	if (x < arr[count-1]) {
		for (i=count; i>=count-1; i--){
			arr[count] = arr[count-1];
		}
		arr[count-1] = x;
		count ++;
		return arr;
	}

// 1. x를 추가할 위치 선정 - O(K)
//x값보다 큰 원소 중 가장 작은 값의 위치
	for (i=0; i<count; i++){
		if (arr[i] > x)
			break;
	}
//2. 위치의 원소를 옮겨서 공간 확보 - O(n-k)
	for (j=count-1; j>=i; j--){
		arr[j+1] = arr[j];
	}
//3. 원소 추가- O(1)
	arr[i] = x;
//4. 배열의 크기 증가 - O(1)
	count++;
	return arr;
}

// 시간복잡도 O(n)
