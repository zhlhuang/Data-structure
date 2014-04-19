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
		//这里有两个函数的重载，在递归上面可以很方便的调用这些函数
	private:
		Node<T> *root;
		Node<T> *Creat(Node<T> * bt);
		void preOrder(Node<T> * bt);
		void inOrder(Node<T> *bt);
		void postOrder(Node<T> *bt);
}
;
