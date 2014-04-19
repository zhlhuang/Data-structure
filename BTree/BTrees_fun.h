template <class T>
Node<T>* BTree<T>::Creat(Node<T> *bt){
	
	T ch;
	cin>>ch;
	if(ch=='#'){
		bt=NULL;
	}else{
		bt=new Node<T>;
		bt->data=ch;
		bt->lChild=Creat(bt->lChild);
		bt->rChild=Creat(bt->rChild);
	}
	return bt;
}

<<<<<<< HEAD
//下面的遍历函数都是用的递归方式执行的
=======
//涓嬮潰閮芥槸閫氳繃浠ヤ笅閫掑綊鏉ュ疄鐜伴亶鍘嗙殑
>>>>>>> origin/master
template <class T>
void BTree<T>::preOrder(Node<T> *bt){
	if(bt==NULL){
		return;
	}else{
		cout<<bt->data;
		preOrder(bt->lChild);
		preOrder(bt->rChild);
	}
}
template <class T>
void BTree<T>::inOrder(Node<T> *bt){
	if(bt==NULL){
		return;
	}else{
		preOrder(bt->lChild);
		cout<<bt->data;
		preOrder(bt->rChild);
	}
}
template <class T>
void BTree<T>::postOrder(Node<T> *bt){
		if(bt==NULL){
		return;
	}else{
		preOrder(bt->lChild);
		preOrder(bt->rChild);
		cout<<bt->data;
	}
}
