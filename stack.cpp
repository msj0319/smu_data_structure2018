class stack {
	int size;
	DataType *Items;
	int top;
}

//생성
void stack::CreateStack(int _size) {
	int size = _size;
	items = new DataType[size];
	top = 0;
}

//엠티
int stack::isEmpty() {
	return (top == 0);
}

//풀
int stack::isFull() {
	return (top == size-1);
}

//푸쉬
void stack::push(DataType item){
	if (isFull()) {
		printf("더 이상 원소를 삽입할 수 없음\n");
	}
	items[top] = item;
	top++;
}
//팝
void stack::pop(){
	if(isEmpty()){
		printf("반환할 원소가 없음\n");
	}
	top--;
	return items[top];
}
void stack::top(){
	return items[top-1];
}