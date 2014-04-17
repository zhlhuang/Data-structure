template <class T>
LinkList<T>::LinkList(){
	head=new Node<T>;
	head->next=NULL;
	rear=new Node<T>;
	rear->next=NULL;
	flag=false;
}
template <class T>
void LinkList<T>::Insert(int i,T data){
	Node<T> *p=head;
	Node<T> *s;
	int count=0;
	while(p!=NULL && count<i-1){
		p=p->next;
		count++;
	}
	if(p==NULL) throw "位置异常";
	else{
		s=new Node<T>;
		s->data=data;
		s->next=p->next;
		p->next=s;
	}
}
template <class T>
void LinkList<T>::PrintList(){
	Node<T> *p=head->next;
	if(flag){
		while (p!=rear){
			cout<<p->data<<endl;
			p=p->next;
		}
		cout<<rear->data<<endl;
		}else{
		while (p!=NULL){
			cout<<p->data<<endl;
			p=p->next;
		}
		}
}
template <class T>
void LinkList<T>::Delete(int i){
	Node<T> *p=head;
	Node<T> *q;
	int j=0;
	while (p!=NULL && j<i-1 ){
		p=p->next;
		j++;
	}
	if(p==NULL) throw "位置";
	else{
		q=p->next;
		cout<<"删除节点："<<q->data<<endl;
		p->next=q->next;
		delete q;
	}
}
template <class T>
int LinkList<T>::look_val(T x){
	Node<T> *p=head->next;
	int i=1;
	while(p!=NULL){
		if(p->data==x){
			return i;
		}else{
			p=p->next;
			i++;
		}
	}
	return 0;
}
template <class T>
T LinkList<T>::look_key(int i){
	Node<T> *p;
	int j=1;
	p=head->next;
	while(p!=NULL && j<i){
		p=p->next;
		j++;
	}
	if(p==NULL){
		throw "位置";
	}else{
		return p->data;
	}
}

template <class T>
void LinkList<T>::turn(){
	Node<T> *p;
	p=head->next;
	while(p!=NULL && p->next!=NULL){
		p=p->next;
	}
	if(p==NULL){
		throw "位置";
	}else{
		flag=true;
		p->next=head->next;
		rear=p;
	}
}
template <class T>
void LinkList<T>::Jose(){
	if(!flag){
		cout<<"链表必须为循环链表"<<endl;
	}else{
		int n;
		Node<T> *p;
		p=head->next;
		cout<<"输入n：";
		cin>>n;
		cout<<endl<<"你输入的是："<<n<<endl;
		while(head->next->data>0){
			p=jose_f(n,p);
		}		
	}
}

template <class T>
Node<T> * LinkList<T>::jose_f(int n,Node<T>* p){
	Node<T> *q;
	int j=1;
	while(p!=NULL && j<n){
		p=p->next;
		j++;
	}
	cout<<p->data<<endl;
	q=p->next;
	head->next=q;
	Delete(look_val(p->data));
	return q;
}