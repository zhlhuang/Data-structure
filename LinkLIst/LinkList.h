template <class T>
struct Node{
	T data;
	Node<T> *next;
};

template <class T>
class LinkList{
public:
	LinkList();
	void Insert(int i,T date);//指定位置增加
	void Delete(int i);//指定位置删除
	int look_val(T x);//按值查找
	T look_key(int i);
	void Jose();//约瑟夫环问题
	Node<T>* jose_f(int n,Node<T>* p);//约瑟夫环附属函数
	void turn();//转化成循环链表
	void PrintList();
	Node<T> * headNode();
private:
	Node<T> *head;
	Node<T> *rear;
	bool flag;//是否转化成循链表默认为false 单链表
};