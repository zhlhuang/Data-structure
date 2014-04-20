template <class T>
BTree<T>::BTree(){
	leaf=new Node<T>;
	leaf->next=NULL;
}
template <class T>
Node<T>* BTree<T>::Creat(Node<T> *bt){
	/*
	T ch;
	cin>>ch;
	if(ch==-1){
		bt=NULL;
	}else{
		bt=new Node<T>;
		bt->data=ch;
		bt->lChild=Creat(bt->lChild);
		bt->rChild=Creat(bt->rChild);
	}
	return bt;
	*/
	return bt;
}

//下面的遍历函数都是用的递归方式执行的
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


template <class T>
void BTree<T>::leafList(T leafArray[],int n){
	Node<T> *p;
	p=leaf;
	for(int i=0;i<n;i++ ){
		//这是生成哈弗曼叶子链表


		Node<T> *s;
		s=new Node<T>;
		s->data=leafArray[i];
		s->next=NULL;
		p->next=s;
		p=p->next;
	}
}
template <class T>
void BTree<T>::printleaf(){
	Node<T> *p;
	p=leaf->next;
	while(p!=NULL){
		cout<<p->data;
		p=p->next;
	}
}
template <class T>
void BTree<T>::leafToBTree(){
	Node<T> *p;
	p=leaf->next;
	while(p!=NULL && p->next!=NULL){
		int all;
		all=p->data+p->next->data;
	}
}