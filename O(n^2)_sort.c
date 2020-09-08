//삽입정렬
//최선 O(n)
//최악 O(n^2)
void insert(int x, int n, int a[]){
	//1. 위치를 찾는다.
	for (int i=0; i<n; i++){
		if (a[i] > x) {
			break;
		}
	}
	//2. 이동한다.
	for (int j=n-1; j>=i; j--){
		a[j+1] = a[j];
	}
	//3. 삽입
	a[i] = x;
	return;
}

void insertion_sort(int n, int a[]){
	for (int i=1; i<n; i++){
		insert(a[i], i, a);
	}
}

//다른 삽입정렬 코드
void insert(int x, int n, int b[]){
	int i,j;
	for (i=0; i<n; i++){
		if (b[i] >= x){
			for (j=n-1; j>=i; j--){
				b[j] = b[j-1];
			}
			b[i] = x;
			break;
		}
	}
}

//버블 정렬
