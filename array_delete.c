Array delete (Array arr, elt x) {
	//0. 예외 처리
	// 배열의 원소가 없을 때
	if (count == 0) {
		printf("삭제할 배열이 없습니다.");
	}
	//첫번째 원소가 삭제할 원소일 때
	if (arr[0] == x) {
		for (i=0; i<count-1; i++) {
			arr[i] = arr[i+1];
			count --;
		}
		return arr;
	}
	//x가 마지막 원소일 때
	if (arr[count-1] == x) {
		for (i=count-1; i<= count; i++) {
			arr[i] = arr[i+1];
			count --;
		}
		return arr;
	}
	//x가 배열에 없을 때
	for (i=0 i<count-1; i++){
		if (arr[i] ! = x) {
			printf("x가 존재하지 않음");
		}
		return;
	}
	

	//1. x를 배열에서 찾기
	for (i=0; i<count-1; i++) {
		if (arr[i] == x) {
			break;
		}
	}
	//2. 원소를 앞으로 이동
	for (j=i; j<count-1; j++) {
		arr[j] = arr[j+1];
		count--;
	}
	return arr;
}
//시간복잡도 O(n)