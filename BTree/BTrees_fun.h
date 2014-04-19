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

//下面都是通过以下递归来实现遍历的
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
