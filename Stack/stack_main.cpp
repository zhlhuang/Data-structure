#include <iostream>
using namespace std;
#include "stack.h"
#include "stack_fun.h"
int flag(char a,char b){//a��ջ������� b�ǵ�ǰ�����
	if(b==')'){
		if(a=='('){
			return 4;
		}else{
			return 2;
		}
	}
	else if(b=='('){
		return 3;
	}else{
		if(a=='*' || a=='/'){
			if(b=='*' || b=='/'){//�������ȼ�һ�����򷵻�1
				return 1;
			}else{
				return 2;//���a����b���ⷵ��2   //����ǰ�ַ���sջ��С��
			}
		}else if(a=='+' || a=='-'){
			if(b=='*' || b=='/'){//���aС��b �򷵻�3
				return 3;//����ǰ�ַ���sջ����
			}else if(b=='+' || b=='-'){
				return 1;
			}
		}else{
			return 3;
		}
	}
}
void main(){
	/*
	cout<<"hello"<<endl;
	Stack<char> s;
	s.push(2,'k');
	s.push(2,'j');
	cout<<s.pop(2)<<endl;
	s.push(2,'o');
	cout<<s.pop(2)<<endl;
	���ǲ��ֲ��Դ���*/
   char ch[stacksize];//�������ǿ��Խ����û�����ı��ʽ
   Stack<char> s;
   s.push(1,'#');
    cin>>ch;
	int i=0;
	while(ch[i]!='\0' && i<stacksize){
		if(ch[i]=='+' || ch[i]=='-' || ch[i]=='*' || ch[i]=='/'||ch[i]=='('||ch[i]==')'){
		//	cout<<"^"<<flag(s.getpop(1),ch[i])<<"^"<<endl;
			cout<<" ";
			int f=flag(s.getpop(1),ch[i]);

			if(f==1){//���㼶���
				cout<<s.pop(1);//ջ��Ԫ�س�ջ
				s.push(1,ch[i]);//�����������ջ
				i++;//������һ���ַ�
			}else if(f==3){//��ǰ�������ջ��������ȼ���

				s.push(1,ch[i]);//�������ջ
				i++;//������һ�������

			}else if(f==2){//��ǰ�����С��ջ���������ջ��Ԫ�س�ջ����������һ��
				cout<<s.pop(1);

			}else if(f==4){//�������������������������� ���� ��
				s.pop(1);
				i++;
			}
		}else{
			cout<<ch[i];
			i++;
		}	
	}
	while(s.empty(1)>=0){
		cout<<s.pop(1);
	}
	cout<<endl;
}