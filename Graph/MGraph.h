const int MaxSize=10;
template <class T>
class MGraph{
	public :
		MGraph(T a[],int n,int e);//���캯������������n������e���ߵ�ͼ
		~MGraph(){};
		void DFST(int v);//������ȱ���ͼ
		void BFST(int v);//������ȱ���ͼ
	private :
		T vertex[MaxSize]; //���ͼ�ж��������
		int arc[MaxSize][MaxSize];//���ͼ�бߵ�����
		int visited[MaxSize];
		int vertexNum,arcNum;
};