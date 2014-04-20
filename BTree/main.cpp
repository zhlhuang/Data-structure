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

	int leafarray[4]={1,2,3,4};

	bt.leafList(leafarray,4);
	bt.printleaf();
	cout<<endl;
}
