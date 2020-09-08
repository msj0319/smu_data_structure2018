void dfs(vertex u){
	visit[u] = true;
	for (w = graph[u]; w!=NULL; w = w=>link){
		if (!visit[w])
			dfs(w);
	}
}
void dfs(graph G){
	for all v in G
		visit[v] = false;
	for all v in G
		if(visit[v] == false)
			dfs(v);
}


void bfs(vertex v){
	vertex w;
	front=rear=NULL;
	visit[v] = true;
	push(v);
	while (!emptyQ()){
		v = pop();
		for(w= graph[v]; w!=NULL; w = w->link)
			if (!visit[w]){
				visit[w] = true;
				push(w);
			}
	}
}