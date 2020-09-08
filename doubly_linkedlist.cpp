//이중 연결리스트의 정의
class node {
	data_type item;
	node *llink, *rlink;
}

//헤드노드 정의
class hnode {
	node *link;
}

//이중연결리스트 검색은 단일 연결리스트와 같음

//1. 추가
void node::insert(data_type item) {
	//1. 적절한 위치 선정
	node *curr = this;
	while (curr->rlink != NULL) {
		if (curr->rlink->item > item) {
			break;
		}
		curr = curr->rilnk;
	}
	//2. 새로운 노드 생성
	node *nnode = new node;
	nnode->item = item;

	//3. 링크 갱신
	//rlink 방향
	nnode->rlink = curr->rlink;
	curr->rlink = nnode;
	//llink 방향
	nnode->llink = curr;
	curr->rlink->llink = nnode;
}

//제거
void node::delete(data_type item) {
	node *curr = this;
	while (curr->rlink != NULL) {
		if (curr->rlink->item == item) {
			break;
		}
		curr = curr->rlink;
	}
	node *dnode = curr->rlink;
	//rlink
	curr->rlink = dnode->rlink;
	//llink
	curr->rlink->llink = dnode->link;
	free(dnode);
}