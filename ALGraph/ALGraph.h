
struct ArcNode{  //定义边节点
	int adjvex;   //临接点索引值
	ArcNode *next;  
}
;
struct VertexNode{
	char vertex;
	ArcNode *fristedge;
};
class ALGraph{
public :
	ALGraph(char a[],int n,int e); //构造一个有n个节点，e条边的图
//	~ALGraph(){};
	void DFST(int v); //深度优先遍历
	void BFST(int v);//广度优先遍历
private :
    VertexNode adjlist[10];
	int visited[10];
	int vertexNum;
	int arcNum;
};

