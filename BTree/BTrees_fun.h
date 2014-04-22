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

//����ı������������õĵݹ鷽ʽִ�е�
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
		//�������ɹ�����Ҷ������


		Node<T> *s;
		s=new Node<T>;
		s->data=leafArray[i];

		s->next=NULL;
		s->lChild=NULL;
		s->rChild=NULL;

		p->next=s;
		leafrear=s;//βָ��ָ��s�����һ����㣩
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
		//Ҷ�������У�ǰ����Ԫ�ز���Ϊ��
		int all;
		p=leaf->next;
		all=p->data+p->next->data;
		dele(all);//��ͷ����Ԫ�ش������г�ȥ  �������½ڵ�
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
		//�����������㲻Ϊ��
		Node<T> *s;
		s=new Node<T>;//����һ���½��
		s->data=all;
		s->next=NULL;
		s->lChild=p->next;
		s->rChild=p->next->next;
		//����С�����ڵ�����һ���½ڵ�

		leafrear->next=s;
		leaf->next=p->next->next->next;//ֱ�������������ڵ�
		leafrear=s;
}