#include <iostream>
using namespace std;
#include "BTree.h"
#include "BTrees_fun.h"
void main(){
//	cout<<"hello world"<<endl;
	/*
	BTree<char> bt;
	bt.preOrder();
	cout<<endl;
	bt.inOrder();
	cout<<endl;
	bt.postOrder();
	cout<<endl;
	*/
	BTree<int> bt;

	int leafarray[5]={1,2,3,4,5};//�����������Ҳ��������

	bt.leafList(leafarray,5);
	bt.printleaf();
	cout<<endl;
	bt.leafToBTree();//ת���ɶ�����
	bt.preOrder();
	cout<<endl;
}
