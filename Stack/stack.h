const int stacksize=20;
template <class T>
class Stack{
	public:
		Stack(){top1=-1;top2=stacksize;}
		void push(int i,T x);//ǰ���i������һ��ջ���룬����������Ҫ�����ֵ

		T pop(int i);//i��ָ��Ҫִ�г�ջ������ջ

		T getpop(int i);//ȡ��ջ����Ԫ�أ�������ִ�г�ջ

		int empty(int i);//�ж�ջ���Ƿ�Ϊ��
	private:
		int top1,top2;
		T data[stacksize];
};