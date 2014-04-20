template <class T>
struct Node{
	T data;
	Node<T> *lChild,*rChild,*next;
};
template <class T>
class BTree{
	public:
		BTree();

		void preOrder(){preOrder(root);};//前序遍历
		void inOrder(){inOrder(root);};//中序遍历
		void postOrder(){postOrder(root);};//后序遍历

		void leafList(T leafArray[],int n);//这个函数生成一条哈弗曼叶子链表
		void printleaf();//遍历叶子链表
		void leafToBTree();//将叶子链表转化成二叉树
		void dele();//将链表两个从链表去除，（ps 不是删除）
		void insert();//在尾部插入合成的节点



		//这里两个同名函数的调用  是为了后面递归调用做准备的

	private:
		Node<T> *root;//二叉树根
		Node<T> *leaf;//也链表的头部
		Node<T> *leafrear;//也链表的尾部
		Node<T> *Creat(Node<T> * bt);
		void preOrder(Node<T> * bt);
		void inOrder(Node<T> *bt);
		void postOrder(Node<T> *bt);
}
;
