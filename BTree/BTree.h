template <class T>
struct Node{
	T data;
	Node<T> *lChild,*rChild;
};
template <class T>
class BTree{
	public:
		BTree(){root=Creat(root);};
		void preOrder(){preOrder(root);};//前序遍历
		void inOrder(){inOrder(root);};//中序遍历
		void postOrder(){postOrder(root);};//后序遍历
		//这里两个同名函数的调用  是为了后面递归调用做准备的

	private:
		Node<T> *root;
		Node<T> *Creat(Node<T> * bt);
		void preOrder(Node<T> * bt);
		void inOrder(Node<T> *bt);
		void postOrder(Node<T> *bt);
}
;