template <class T>
struct Node{
	T data;
	Node<T> *lChild,*rChild,*next;
};
template <class T>
class BTree{
	public:
		BTree();

		void preOrder(){preOrder(root);};//ǰ�����
		void inOrder(){inOrder(root);};//�������
		void postOrder(){postOrder(root);};//�������

		void leafList(T leafArray[],int n);//�����������һ��������Ҷ������
		void printleaf();//����Ҷ������
		void leafToBTree();//��Ҷ������ת���ɶ�����
		void dele();//����������������ȥ������ps ����ɾ����
		void insert();//��β������ϳɵĽڵ�



		//��������ͬ�������ĵ���  ��Ϊ�˺���ݹ������׼����

	private:
		Node<T> *root;//��������
		Node<T> *leaf;//Ҳ�����ͷ��
		Node<T> *leafrear;//Ҳ�����β��
		Node<T> *Creat(Node<T> * bt);
		void preOrder(Node<T> * bt);
		void inOrder(Node<T> *bt);
		void postOrder(Node<T> *bt);
}
;
