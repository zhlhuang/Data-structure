template <class T>
struct Node{
	T data;
	Node<T> *lChild,*rChild;
};
template <class T>
class BTree{
	public:
		BTree(){root=Creat(root);};
		void preOrder(){preOrder(root);};//ǰ�����
		void inOrder(){inOrder(root);};//�������
		void postOrder(){postOrder(root);};//�������
		//��������ͬ�������ĵ���  ��Ϊ�˺���ݹ������׼����

	private:
		Node<T> *root;
		Node<T> *Creat(Node<T> * bt);
		void preOrder(Node<T> * bt);
		void inOrder(Node<T> *bt);
		void postOrder(Node<T> *bt);
}
;