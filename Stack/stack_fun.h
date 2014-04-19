template <class T>
void Stack<T>::push(int i,T x){
	if(top1==top2-1){
		cout<<"ջ������"<<endl;
		return ;
	}
	if(i==1){
		data[++top1]=x;
	}
	if(i==2){
		data[--top2]=x;
	}
}
template <class T>
T Stack<T>::pop(int i){
	if(i==1){
		if(top1==-1){
			cout<<"��ջ����"<<endl;
			return 0 ;
		}else{
			return data[top1--];
		}
	}

	if(i==2){
		if(top2==stacksize){
			cout<<"��ջ����"<<endl;
				return 0 ;
		}else{
			return data[top2--];
		}
	}
}

template <class T>
T Stack<T>::getpop(int i){
	if(i==1){
		if(top1==-1){
			cout<<"��ջ����"<<endl;
			return 0 ;
		}else{
			return data[top1];
		}
	}

	if(i==2){
		if(top2==stacksize){
			cout<<"��ջ����"<<endl;
				return 0 ;
		}else{
			return data[top2];
		}
	}
}

template <class T>
int Stack<T>::empty(int i){
	if(i==1){
		return top1;
	}else{
		return top2;
	}
}