template <class T>
struct Node{
	T data;
	Node<T> *lChild,*rChild;
};
template <class T>
class BTree{
	public:
		BTree(){root=Creat(root);};
<<<<<<< HEAD
		void preOrder(){preOrder(root);};//前序遍历
		void inOrder(){inOrder(root);};//中序遍历
		void postOrder(){postOrder(root);};//后序遍历
		//这里两个同名函数的调用  是为了后面递归调用做准备的

=======
		void preOrder(){preOrder(root);};//前锟斤拷锟斤拷锟�
		void inOrder(){inOrder(root);};//锟斤拷锟斤拷锟斤拷锟�
		void postOrder(){postOrder(root);};//锟斤拷锟斤拷锟斤拷锟�
		//杩欓噷鏈変袱涓嚱鏁扮殑閲嶈浇锛屽湪閫掑綊涓婇潰鍙互寰堟柟渚跨殑璋冪敤杩欎簺鍑芥暟
>>>>>>> origin/master
	private:
		Node<T> *root;
		Node<T> *Creat(Node<T> * bt);
		void preOrder(Node<T> * bt);
		void inOrder(Node<T> *bt);
		void postOrder(Node<T> *bt);
}
;
