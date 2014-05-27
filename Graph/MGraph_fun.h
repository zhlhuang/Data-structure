template <class T>
MGraph<T>::MGraph(T a[],int n,int e){
	vertexNum=n;
	arcNum=e;
	for (int i=0;i<vertexNum;i++){ //将顶点放入到vertex中
		vertex[i]=a[i];
		visited[i]=0;
	}

	for(i=0;i<vertexNum;i++){//初始化邻接表
		for(int j=0;j<vertexNum;j++){
			arc[i][j]=0;
		}
	}

/*	int k=0;
	while(k<arcNum){ //输出边依附的两个顶点
		int i,j;
		cout<<"请输入第"<<k+1<<"边";
		cin>>i>>j;
		if(j<10 && i<10){
			arc[i][j]=1;
			arc[j][i]=1;
			k++;
		}else{
			cout<<"输出有误";
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