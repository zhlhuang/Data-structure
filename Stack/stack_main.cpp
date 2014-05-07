#include <iostream>
using namespace std;
#include "stack.h"
#include "stack_fun.h"
int flag(char a,char b){//a是栈顶运算符 b是当前运算符
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
			if(b=='*' || b=='/'){//如果运算等级一样大，则返回1
				return 1;
			}else{
				return 2;//如果a大于b，这返回2   //（当前字符比s栈顶小）
			}
		}else if(a=='+' || a=='-'){
			if(b=='*' || b=='/'){//如果a小于b 则返回3
				return 3;//（当前字符比s栈顶大）
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
	这是部分测试代码*/
   char ch[stacksize];//这里我们可以接受用户输入的表达式
   Stack<char> s;
   s.push(1,'#');
    cin>>ch;
	int i=0;
	while(ch[i]!='\0' && i<stacksize){
		if(ch[i]=='+' || ch[i]=='-' || ch[i]=='*' || ch[i]=='/'||ch[i]=='('||ch[i]==')'){
		//	cout<<"^"<<flag(s.getpop(1),ch[i])<<"^"<<endl;
			cout<<" ";
			int f=flag(s.getpop(1),ch[i]);

			if(f==1){//运算级相等
				cout<<s.pop(1);//栈顶元素出栈
				s.push(1,ch[i]);//将该运算符入栈
				i++;//处理下一个字符
			}else if(f==3){//当前运算符比栈顶运算符等级高

				s.push(1,ch[i]);//运算符入栈
				i++;//处理下一个运算符

			}else if(f==2){//当前运算符小于栈顶运算符，栈顶元素出栈，不处理下一个
				cout<<s.pop(1);

			}else if(f==4){//如果是左右括号相遇，则输出（ 跳过 ）
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