const int MaxSize=10;
template <class T>
class MGraph{
	public :
		MGraph(T a[],int n,int e);//构造函数，建立具有n个顶点e条边的图
		~MGraph(){};
		void DFST(int v);//深度优先遍历图
		void BFST(int v);//广度优先便利图
	private :
		T vertex[MaxSize]; //存放图中顶点的数组
		int arc[MaxSize][MaxSize];//存放图中边的数组
		int visited[MaxSize];
		int vertexNum,arcNum;
};