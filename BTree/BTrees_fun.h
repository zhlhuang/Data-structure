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
		cout<<bt->data<<"-";
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
		s->lChild=NULL;
		s->rChild=NULL;

		p->next=s;
		leafrear=s;//尾指针指向s（最后一个结点）
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
	while(leaf->next!=NULL && leaf->next->next!=NULL){
		//叶子链表中，前两个元素不能为空
		int all;
		p=leaf->next;
		all=p->data+p->next->data;
		dele(all);//将头两个元素从链表中出去  并生成新节点
	}
	if(leaf->next->next==NULL){
		root=leaf->next;
		delete leaf;
	}
}

template <class T >
void BTree<T>::dele(int all){
	Node<T> *p;
	p=leaf;
		//如果第三个结点不为空
		Node<T> *s;
		s=new Node<T>;//创建一个新结点
		s->data=all;
		s->next=NULL;
		s->lChild=p->next;
		s->rChild=p->next->next;
		//有最小两个节点生成一个新节点

		insert(s);//按顺序插入叶子链表中
		leaf->next=p->next->next->next;//直接跳到第三个节点
		leafrear=s;
}

template <class T>
void BTree<T>::insert(Node<T> *s){
	T a;
	a=s->data;
	Node<T> *p;
	p=leaf;
	while(p!=NULL){
		if(p->next!=NULL){
			if(a<=p->next->data){//如果新生成节点 不大于 当前链表中的叶子，就把新节点插入该叶子前
				s->next=p->next;
				p->next=s;
				break;
			}else{  // 不满足不大于条件，检测下一个叶子
				p=p->next;
			}
		}else{ //比所有叶子都大 直接插入叶子链表最后
			p->next=s;
			break;
		}
	}
}