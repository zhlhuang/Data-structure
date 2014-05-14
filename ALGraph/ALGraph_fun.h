ALGraph::ALGraph(char a[],int n,int e){
	vertexNum=n;
	arcNum=e;
	for (int i=0;i<vertexNum;i++){
		adjlist[i].vertex=a[i];
		adjlist[i].fristedge=NULL;
	}

	for(int k=0;k<arcNum;k++){
		ArcNode * s;
		int i;
		int j;
		cin>>i>>j;
		s=new ArcNode;       //生成一个新的节点
		s->adjvex=j;     //这个节点的索引值
		s->next=adjlist[i].fristedge;//如果定点节点有边节点了，就放在新节点后面
		adjlist[i].fristedge=s;//新增加的边节点加入都定点节点中
	}

	for(int q=0;q<vertexNum;q++){//初始化标记数组
		visited[q]=0;
	}
}


void ALGraph::DFST(int v){
	ArcNode *p;
	cout<<adjlist[v].vertex;
	visited[v]=1;
	p=adjlist[v].fristedge;
	while(p!=NULL){
		int j;
		j=p->adjvex;
		if(visited[j]==0){
			DFST(j);
		}
		p=p->next;
	}
}


void ALGraph::BFST(int v){
	int front=-1;
	int rear=-1;
	cout<<adjlist[v].vertex;//将遍历的起点输出
	visited[v]=1;
	int Q[10];
	Q[++rear]=v;
	ArcNode *p;
	while(front!=rear){
		v=Q[++front];
		p=adjlist[v].fristedge;
		while(p!=NULL){
			int j;
			j=p->adjvex;
			if(visited[j]==0){
				cout<<adjlist[j].vertex;
				visited[j]=1;
				Q[++rear]=j;
			}
			p=p->next;
		}
	}
}