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
		void preOrder(){preOrder(root);};//Ç°Ðò±éÀú
		void inOrder(){inOrder(root);};//ÖÐÐò±éÀú
		void postOrder(){postOrder(root);};//ºóÐò±éÀú
		//ÕâÀïÁ½¸öÍ¬Ãûº¯ÊýµÄµ÷ÓÃ  ÊÇÎªÁËºóÃæµÝ¹éµ÷ÓÃ×ö×¼±¸µÄ

=======
		void preOrder(){preOrder(root);};//Ç°ï¿½ï¿½ï¿½ï¿½ï¿½
		void inOrder(){inOrder(root);};//ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
		void postOrder(){postOrder(root);};//ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
		//è¿™é‡Œæœ‰ä¸¤ä¸ªå‡½æ•°çš„é‡è½½ï¼Œåœ¨é€’å½’ä¸Šé¢å¯ä»¥å¾ˆæ–¹ä¾¿çš„è°ƒç”¨è¿™äº›å‡½æ•°
>>>>>>> origin/master
	private:
		Node<T> *root;
		Node<T> *Creat(Node<T> * bt);
		void preOrder(Node<T> * bt);
		void inOrder(Node<T> *bt);
		void postOrder(Node<T> *bt);
}
;
