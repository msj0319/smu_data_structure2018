//큐 클래스
class queue {
	int size;
	DataType *items;
	int rear, front;
};

//생성
void queue::CreateQueue(int _size) {
	int size = _size;
	items = new DataType[size];
	front = rear = -1;
}

//엠티
int queue::isEmpty(){
	return (front == rear);
}

//풀
int queue::isFull(){
	return (rear == size-1);
}
//인큐
void queue::Enqueue(elt item){
	if (isFull())
		printf("데이터를 넣을 수 없습니다.\n");
	rear++;
	items[rear] = item;
}

//디큐
void queue::Dequeue() {
	if (isEmpty())
		printf("삭제할 데이터가 없습니다.\n");
	front++;
	return items[front];
}

//원형 큐
class circlequeue {
	int size;
	DataType *items;
	int rear, front;
	int count;
};

//원형큐 is Full
void circlequeue::isFull(){
	return (count == size);
}

//원형큐 isEmpty
void circlequeue::isEmpty(){
	return (count == 0);
}

//원형큐 enqueue
void circlequeue::Enqueue(elt item){
	if (isFull())
		printf("데이터를 넣을 수 없습니다.\n");
	rear = (rear+1)%size;
	items[rear] = item;
	count++;
}

//원형큐 dequeue
int circlequeue::Dequeue(){
	if(isEmpty())
		printf("반환할 데이터가 없습니다.\n");
	count--;
	front = (front+1)%size;
	return items[front];
}