
struct ArcNode{  //����߽ڵ�
	int adjvex;   //�ٽӵ�����ֵ
	ArcNode *next;  
}
;
struct VertexNode{
	char vertex;
	ArcNode *fristedge;
};
class ALGraph{
public :
	ALGraph(char a[],int n,int e); //����һ����n���ڵ㣬e���ߵ�ͼ
//	~ALGraph(){};
	void DFST(int v); //������ȱ���
	void BFST(int v);//������ȱ���
private :
    VertexNode adjlist[10];
	int visited[10];
	int vertexNum;
	int arcNum;
};

