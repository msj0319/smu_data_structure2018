//구조체 노드 선언(C언어)
typedef struct class _node node;
struct node {
	char ats[3];
	node *link;
};

//클래스 노드 선언 (C++)
class node {
	char ats[3];
	node *link;
};

//1. 생성: 헤드 노드 선언
class hnode {
	node *link;
};

//2. 검색(선형 검색만 가능)
//2-1. hnode에서 검색 시작
node *hnode::search(data_type item) {
	return this->link->search(item);
}
//2-2. node에서의 검색
node *node::search(data_type item) {
	node* curr = this;
	while (curr != NULL) {
		if (curr->item == item) {
			return curr;
		}
		curr = curr->link;
	}
	return NULL;
}

//2-3 for문 검색
node *node::search(data_type item){
	for (node *curr = this; curr!=NULL; curr= curr->link) {
		if (curr->item == item){
			return curr;
		}
		return NULL;
	}
}

//3. 추가
node *hnode::insert(data_type item){
	this->link->insert(item);
}
node *node::insert(data_type item) {
	node *curr = this;
	while (curr->link!=NULL) {
		if (curr->link->item > item) { //내 다음에 올 원소의 아이템이 나보다 크면
			break;
		}
		curr->curr->link;
	}
	//2. 새로운 노드 생성
	node *nnode = new node;
	nnode->item = item;
	//3. 링크 갱신
	nnode->link = curr->link;
	curr->link = nnode;

} 

//4. 제거
node *node::delete(data_type item) {
	node *curr = this;
	//1. 제거할 원소 찾음
	while (curr->link! = NULL) {
		if (curr->link->item == item) {
			//내 다음에 올 원소가 삭제할 원소면 
			break;
		}
		curr = curr->link;	
	}
	//2. 링크 갱신 리스트 분리
	node *dnode = curr->link;
	curr->link = dnode->link;
	//노드의 메모리 free
	free(dnode);
}

//시간복잡도 O(n)