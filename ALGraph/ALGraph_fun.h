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
		s=new ArcNode;       //����һ���µĽڵ�
		s->adjvex=j;     //����ڵ������ֵ
		s->next=adjlist[i].fristedge;//�������ڵ��б߽ڵ��ˣ��ͷ����½ڵ����
		adjlist[i].fristedge=s;//�����ӵı߽ڵ���붼����ڵ���
	}

	for(int q=0;q<vertexNum;q++){//��ʼ���������
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
	cout<<adjlist[v].vertex;//��������������
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