template <class T>
MGraph<T>::MGraph(T a[],int n,int e){
	vertexNum=n;
	arcNum=e;
	for (int i=0;i<vertexNum;i++){ //��������뵽vertex��
		vertex[i]=a[i];
		visited[i]=0;
	}

	for(i=0;i<vertexNum;i++){//��ʼ���ڽӱ�
		for(int j=0;j<vertexNum;j++){
			arc[i][j]=0;
		}
	}

/*	int k=0;
	while(k<arcNum){ //�������������������
		int i,j;
		cout<<"�������"<<k+1<<"��";
		cin>>i>>j;
		if(j<10 && i<10){
			arc[i][j]=1;
			arc[j][i]=1;
			k++;
		}else{
			cout<<"�������";
		}
	
	}	*/

}

template <class T>
void MGraph<T>::DFST(int v){
	if(visited[v]==0){
			cout<<vertex[v];
        	visited[v]=1;
	}
	for(int i=0;i<vertexNum;i++){
		if(arc[v][i]==1 && visited[i]==0){
			DFST(i);
		}
	}
}

template <class T>
void MGraph<T>::BFST(int v){
	int front=-1;
	int rear=-1;
	if(visited[v]==0){
	cout<<vertex[v];
	visited[v]=1;
	}
	int Q[MaxSize];
	Q[++rear]=v;
	while(front!=rear){
		v=Q[++front];
		for(int j=0;j<vertexNum;j++){
			if(arc[v][j]==1 && visited[j]==0){
				cout<<vertex[j];
				visited[j]=1;
				Q[++rear]=j;
			}
		}
	}
}