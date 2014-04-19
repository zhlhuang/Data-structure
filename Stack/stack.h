const int stacksize=20;
template <class T>
class Stack{
	public:
		Stack(){top1=-1;top2=stacksize;}
		void push(int i,T x);//前面的i是在哪一个栈插入，后面是我们要插入的值

		T pop(int i);//i是指定要执行出栈操作的栈

		T getpop(int i);//取出栈顶的元素，并不是执行出栈

		int empty(int i);//判断栈顶是否为空
	private:
		int top1,top2;
		T data[stacksize];
};